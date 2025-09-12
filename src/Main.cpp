#include "ast/Tree.hpp"
#include "ast/TreeBuilder.hpp"
#include "ast/Visitor.hpp"

#include "compile/Compiler.hpp"

#include "interp/Machine.hpp"
#include "interp/Writer.hpp"

#include "vm/Vm.hpp"

int main(int argc, char** argv)
{
	using namespace fmcs;

	// ast::Owner_t<ast::SeqTermNode> term = ast::TreeBuilder::Parse(
	// 	"[[5]out] . <print> . [69] . print");
	// ast::Owner_t<ast::SeqTermNode> term = ast::TreeBuilder::Parse(
	// 	"[<x> . [x]out] . <print> . [69] . print");
	// ast::Owner_t<ast::SeqTermNode> term = ast::TreeBuilder::Parse(
	// 	"[420] . <y> . [<x> . [x]out . [y]out] . <print> . [69] . print");
	// ast::Owner_t<ast::SeqTermNode> term = ast::TreeBuilder::Parse(
	// 	"[420] . <y> . [[[1337]out] . <x> . [x]out . [y]out] . <print> . [69] . print");
	// ast::Owner_t<ast::SeqTermNode> term = ast::TreeBuilder::Parse(
	// 	"[420] . <y> . [[[1337]out] . <x> . [x]out . [y]out] . <print> . [69] . [<z> . [z]out] . <f> . f . print");
	// ast::Owner_t<ast::SeqTermNode> term = ast::TreeBuilder::Parse(
	// 	"<x> . <y> . <z> . [<y> . [y] . [[z]] . [x]] . <z> . <f> . y . f");
	// ast::Owner_t<ast::SeqTermNode> term = ast::TreeBuilder::Parse(
	// 	"[1] . [2] . [3] . <x> . <y> . <z> . [4] . [5] . [<y> . [y]out . <p> . [[y]out . [z]out . [p]out] . <g> . [z] . [x] . g] . <f> . f . [x]out");
	// ast::Owner_t<ast::SeqTermNode> term = ast::TreeBuilder::Parse(
	// 	"[69] . <x> . [[5] . [x]] . <f> . [1] . [<x> . [f]] . <g> . g . <h> . h");
	ast::Owner_t<ast::SeqTermNode> term = ast::TreeBuilder::Parse(
		"[10] . <a> . [20] . <b> . [[a] . [b]] . <makePair> . makePair");

	compile::Compiler compiler = compile::Compiler::Compile(term.get());
	compile::CompiledProgram program = compiler.GetProgram();
	vm::Vm vm;
	vm::Value result = vm.Run(&program);

	std::cout << result << std::endl;

	return 0;
}
