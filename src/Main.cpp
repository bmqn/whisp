#include "ast/Tree.hpp"
#include "ast/TreeBuilder.hpp"
#include "ast/Visitor.hpp"

#include "interp/Machine.hpp"
#include "interp/Writer.hpp"

#include <readline/readline.h>
#include <readline/history.h>

namespace fmcs {
namespace interp {

class CodeGenerator : public ast::Visitor {
public:
    CodeGenerator() {}

    void Generate(ast::NodePtr_t root) {
        m_Code << "section .data\n";
        m_Code << "section .text\n";
        m_Code << "global _start\n";
        m_Code << "_start:\n";
        root->Accept(*this);
        m_Code << "mov rax, 60\n"; // sys_exit
        m_Code << "xor rdi, rdi\n";
        m_Code << "syscall\n";
    }

    std::string GetCode() const {
        return m_Code.str();
    }

private:
    std::ostringstream m_Code;

    void Emit(std::string_view instr) {
        m_Code << instr << "\n";
    }

    virtual void Visit(const ast::Int32LitNode& node) override {
        Emit("mov rax, " + std::to_string(node.Val));
        Emit("push rax");
    }

    virtual void Visit(const ast::StrLitNode& node) override {
        Emit("section .data");
        Emit("strlit db \"" + node.Val + "\", 0");
        Emit("section .text");
        Emit("lea rax, [rel strlit]");
        Emit("push rax");
    }

    virtual void Visit(const ast::VarNode& node) override {
        Emit("mov rax, qword [" + node.Name + "]");
        Emit("push rax");
    }

    virtual void Visit(const ast::SeqAppNode& node) override {
		if (node.Loc) {
			if (node.Loc->Name == "out") {
				// Handle output (e.g., write to stdout)
				node.Arg->Accept(*this);  // Generate code for the argument
				Emit("pop rax");  // Pop the value (in rax)

				// Write the value to stdout (syscall 1: sys_write)
				Emit("mov rdi, 1");  // File descriptor 1 is stdout
				Emit("mov rsi, rax");  // Move the value to rsi (data to write)
				Emit("mov rdx, 4");  // Assume we are writing 4 bytes (e.g., int32_t)
				Emit("mov rax, 1");  // syscall number for sys_write
				Emit("syscall");  // Perform the syscall to write to stdout
			} else if (node.Loc->Name == "in") {
				// Handle input (e.g., read from stdin)
				Emit("mov rdi, 0");  // File descriptor 0 is stdin
				Emit("lea rsi, [rel input_buffer]");  // Address of input buffer
				Emit("mov rdx, 4");  // Assume reading 4 bytes (e.g., int32_t)
				Emit("mov rax, 0");  // syscall number for sys_read
				Emit("syscall");  // Perform the syscall to read from stdin

				// Process the input (assuming we have a buffer)
				Emit("mov rax, [rel input_buffer]");  // Move the input value into rax
				Emit("push rax");  // Push the value onto the stack
			} else {
				// Error("Unbound location", node, *node.Loc);
			}
		} else {
			// Regular application processing if no location is specified
			node.Arg->Accept(*this);  // Generate code for the argument
			Emit("pop rax");  // Pop the argument (function pointer)
			Emit("call rax");  // Call the function pointer
		}

		if (node.Next) node.Next->Accept(*this);  // Process the next part of the sequence
	}

    virtual void Visit(const ast::SeqAppLitNode& node) override {
        node.Lit->Accept(*this);
        if (node.Next) node.Next->Accept(*this);
    }

    virtual void Visit(const ast::SeqAbsNode& node) override {
        Emit(node.Binder->Name + ":");
        Emit("pop rax"); // Pop from the stack and bind it
        Emit("mov qword [" + node.Binder->Name + "], rax");
        if (node.Next) node.Next->Accept(*this);
    }

    virtual void Visit(const ast::SeqOpNode& node) override {
        Emit("pop rbx");
        Emit("pop rax");
        switch (node.Op) {
            case ast::Operation::Plus:
                Emit("add rax, rbx");
                break;
            case ast::Operation::Less:
                Emit("cmp rax, rbx");
                Emit("setl al");
                Emit("movzx rax, al");
                break;
        }
        Emit("push rax");
        if (node.Next) node.Next->Accept(*this);
    }
};

void GenerateAssembly(ast::NodePtr_t root) {
    CodeGenerator generator;
    generator.Generate(root);
    std::cout << generator.GetCode();
}

} // namespace interp
} // namespace fmcs

void Interactive()
{
	using namespace fmcs;

	interp::Machine machine;

	using_history();

	read_history("fmcs-history");

	auto GetLine = []() {
		std::string line;
		
		char *lineRaw = readline("Whisp > ");

		line = lineRaw;

		add_history(lineRaw);

		free(lineRaw);

		write_history("fmcs-history");

		return line;
	};

	// auto Show = [&](interp::Closee_t closee) {
	// 	std::cout <<
	// 		"      > ";

	// 	interp::Env_t subEnv;

	// 	std::visit([&](auto&& arg) {
	// 		interp::Writer writer(&std::cout, arg, &subEnv);
	// 	}, closee);

	// 	std::cout << std::endl;
	// };

	// auto ShowWith = [&](interp::Closee_t closee, std::string message) {
	// 	std::cout <<
	// 		std::format("      > {}", message);

	// 	interp::Env_t subEnv;

	// 	std::visit([&](auto&& arg) {
	// 		interp::Writer writer(&std::cout, arg, &subEnv);
	// 	}, closee);

	// 	std::cout << std::endl;
	// };

	auto Warn = [](std::string_view message) {
		std::cout <<
			std::format("      > Warning : {}",
				message) <<
			std::endl;
	};

	std::vector<ast::Owner_t<ast::SeqTermNode>> terms;

	for (std::string line = GetLine(); !line.empty(); line = GetLine())
	{
		if (line.substr(0, 1) == "!")
		{
			// if (line.substr(1, 1) == "p")
			// {
			// 	std::string variable = line.substr(3);

			// 	if (auto it = env.find(variable); it != env.end())
			// 	{
			// 		Show(it->second);
			// 	}
			// 	else
			// 	{
			// 		Warn(std::format("Variable '{}' is not bound", variable));
			// 	}
			// }
			// else if (line.substr(1, 3) == "env")
			// {
			// 	for (const auto& [binder, closee] : env)
			// 	{
			// 		ShowWith(closee, std::format("{} -> ", binder));
			// 	}
			// }
			// else
			// {
			// 	Warn(std::format("Unknown command '{}'", line.substr(1)));
			// }
		}
		else
		{
			terms.emplace_back(ast::TreeBuilder::Parse(line));

			ast::TermPtr_t term = terms.back().get();

			machine.Execute(term);

			// interp::GenerateAssembly(term);
		}
	}
}

int main(int argc, char** argv)
{
	using namespace fmcs;

	//ast::Owner_t<ast::SeqTermNode> termParsed = ast::TreeBuilder::Parse(
	//	"[\"Horray\"] . <x> . [[x] . <f> . f]out");
	//ast::Owner_t<ast::TermNode> termParsed = ast::TreeBuilder::Parse(
	//	"[<x> . [x] . [\"hello\"]]");
	//ast::Owner_t<ast::SeqTermNode> termParsed = ast::TreeBuilder::Parse(
	//	"[\"Horray\"] . <x> . [x] . <x> . [x] . <y> . [x]out . [y]out");
	//ast::Owner_t<ast::SeqTermNode> termParsed = ast::TreeBuilder::Parse(
	//	"[\"Horray\"] . <x> . [[\"Ahh\"]out] . <f> . f . [x]out");
	//ast::Owner_t<ast::SeqTermNode> termParsed = ast::TreeBuilder::Parse(
	//	"[\"Horray\"] . <x> . [[69] . <x> . [x]out] . <f> . f . [x]out");
	//ast::Owner_t<ast::SeqTermNode> termParsed = ast::TreeBuilder::Parse(
	//	"[<x> . <y> . [x] . [y]] . <swap> . [[\"First\"] . <x> .[x]out] . [[\"Second\"]. <x> .[x]out] . swap . <f> . f . <f> . f");
	//ast::Owner_t<ast::SeqTermNode> termParsed = ast::TreeBuilder::Parse(
	//	"[\"Hello\"] . <x> . <y> . x");
	//ast::Owner_t<ast::SeqTermNode> termParsed = ast::TreeBuilder::Parse(
	//	"[\"Hello\"] . <x> . x");
	//ast::Owner_t<ast::SeqTermNode> termParsed = ast::TreeBuilder::Parse(
	//	"[<a> . <b> . a] . <true> . [<a> . <b> . b] . <false> . [<b> . <a> . <p> . [b] . [a] . p] . <if> . [<p> . [p] . [in<p> . [p] . [\"Continue\"]out . f] . [[\"Exit\"]out ] . if] . <f> . [[true] . f] . <main> . main");

	//ast::Owner_t<ast::SeqTermNode> termParsed = ast::TreeBuilder::Parse(
	//	"[0] . {0 -> [\"Hello\"], [\"Goodbye\"]}");
	//ast::Owner_t<ast::SeqTermNode> termParsed = ast::TreeBuilder::Parse(
	//	"[0] . {0 -> [\"Hello\"], 1 -> [\"Hmmm\"], [\"Goodbye\"]}");

	//interp::Machine machine;
	//machine.Execute(termParsed.get());

	Interactive();

	return 0;
}