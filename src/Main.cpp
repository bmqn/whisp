#include "ast/Tree.hpp"
#include "ast/TreeBuilder.hpp"
#include "ast/Visitor.hpp"

#include "interp/Machine.hpp"
#include "interp/Writer.hpp"

#include <readline/readline.h>
#include <readline/history.h>

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
