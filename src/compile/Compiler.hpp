#pragma once

#include "ast/Tree.hpp"
#include "ast/Visitor.hpp"

#include <cinttypes>
#include <cstring>

#include <vector>

namespace fmcs {
namespace compile {

template<typename... Args>
void Unimplemented(std::format_string<Args...> fmt, const ast::Node& node, Args&&... args)
{
	std::cerr
		<< std::format("Unimplemented: in '{}': ",
			node.Snippet);

	std::cerr
		<< std::format(fmt,
			std::forward<Args>(args)...);

	std::cerr << std::endl;

	std::exit(1);
}

template<typename... Args>
void UnimplementedNoNode(std::format_string<Args...> fmt, Args&&... args)
{
	std::cerr
		<< "Unimplemented: ";

	std::cerr
		<< std::format(fmt,
			std::forward<Args>(args)...);

	std::cerr << std::endl;

	std::exit(1);
}

template<typename... Args>
void Debug(std::format_string<Args...> fmt, const ast::Node& node, Args&&... args)
{
	std::cout
		<< std::format("Debug: in '{}': ",
			node.Snippet);

	std::cout
		<< std::format(fmt,
			std::forward<Args>(args)...);

	std::cout << std::endl;
}

template<typename... Args>
void DebugNoNode(std::format_string<Args...> fmt, Args&&... args)
{
	std::cout
		<< "Debug: ";

	std::cout
		<< std::format(fmt,
			std::forward<Args>(args)...);

	std::cout << std::endl;
}

using Loc_t = uintptr_t;
using S32_t = int32_t;
using U32_t = uint32_t;
using S64_t = int64_t;
using U64_t = uint64_t;

enum class CompiledType
{
	Unit,
	Loc,		// This is a location
	U32,		// This is an unsigned 4 byte integer
	S32,		// This is a signed 4 byte integer
	U64,		// This is an unsigned 8 byte integer
	S64,		// This is a signed 8 byte integer
	Closure		// This is a closure
};

constexpr std::string_view GetTypeName(CompiledType type)
{
	switch (type)
	{
		case CompiledType::Unit:
			return "Unit";
		case CompiledType::Loc:
			return "Loc";
		case CompiledType::U32:
			return "U32";
		case CompiledType::S32:
			return "S32";
		case CompiledType::U64:
			return "U64";
		case CompiledType::S64:
			return "S64";
		case CompiledType::Closure:
			return "Closure";
	}

	return "(unknown)";
}

struct CompiledClosee
{
	static constexpr size_t GetSize(CompiledType type)
	{
		switch (type)
		{
			case CompiledType::Loc:
				return sizeof(Loc_t);
			case CompiledType::U32:
				return sizeof(U32_t);
			case CompiledType::S32:
				return sizeof(S32_t);
			case CompiledType::U64:
				return sizeof(U64_t);
			case CompiledType::S64:
				return sizeof(S64_t);
			default:
				return 0;
		}
	}

	static CompiledClosee FromLoc(Loc_t loc)
	{
		static_assert(sizeof(loc) <= sizeof(CompiledClosee));

		CompiledClosee closee;
		closee.type = CompiledType::Loc;
		std::memcpy(closee.data, &loc, sizeof(loc));

		return closee;
	}

	static CompiledClosee FromS32(S32_t val)
	{
		static_assert(sizeof(val) <= sizeof(CompiledClosee));

		CompiledClosee closee;
		closee.type = CompiledType::S32;
		std::memcpy(closee.data, &val, sizeof(val));

		return closee;
	}

	template<typename T>
	T As() const
	{
		static_assert(sizeof(T) <= sizeof(data));

		T res;
		std::memcpy(&res, data, sizeof(T));

		return res;
	}

	operator uintptr_t() const
	{
		return As<uintptr_t>();
	}

	CompiledType type = CompiledType::Unit;
	uint8_t data[8] = { 0 };
};

class LitResolver : public ast::Visitor
{
public:
	LitResolver(const ast::LitNode& node)
	{
		node.Accept(*this);
	}

	CompiledClosee GetClosee() const
	{
		return m_Closee;
	}

private:
	virtual void Visit(const ast::Int32LitNode& node) override
	{
		m_Closee = CompiledClosee::FromS32(node.Val);
	}

	virtual void Visit(const ast::StrLitNode& node) override
	{
		Unimplemented("LitResolver for StrLitNode", node);
	}

private:
	CompiledClosee m_Closee;
};

struct CompiledCapture
{
	enum Source
	{
		ParentLocal,	// capture from outer scope locals
		ParentCapture	// capture from outer scope captures
	};

	Source source;		// source of this capture
	uint32_t offset;	// offset of capture; local offset if local, capture slot offset if capture
};

struct CompiledClosure
{
	uint32_t instructionOffset;				// offset for first instruction
	std::vector<CompiledCapture> captures;	// captures fo this closure
};

struct CompiledInstruction
{
	enum Opcode : uint32_t
	{
		NoOp,					// no-op
		PushLiteral,			// push literal using literal offset
		PushVariable,			// push variable using local offset
		PushVariableCapture,	// push captured variable using capture slot offset
		PushClosure,			// push closure using closure offset
		BindVariable,			// bind variable by local offset
		Call,					// call closure using closure local offset
		CallCapture,			// call captured closure using capture slot offset 
		Return,					// return from closure
	};

	using Operand = uint32_t;

	Opcode opcode = Opcode::NoOp;
	Operand operand = 0;
};

struct CompiledProgram
{
	std::vector<CompiledClosee> literals;			// literals
	std::vector<CompiledClosure> closures;			// closures
	std::vector<CompiledInstruction> instructions;	// instructions
};

struct CompilerVariableInfo
{
	std::string name;
	uint32_t localOffset = 0;	// local offset of the variable

	bool isRecaptured = false;	// is this variable re-captured from the parent closure
	uint32_t recaptureSlot = 0;	// re-capture slot of the variable in parent closure

	bool isCaptured = false;	// is this variable captured in this closure
	uint32_t captureSlot = 0;	// capture slot of the variable in this closure

	CompiledType type = CompiledType::Unit;
};

struct CompilerEnvironment
{
	uint32_t instructionBase = 0;

	std::shared_ptr<std::vector<CompilerVariableInfo>> variableStack = nullptr;
	std::set<std::string> variablesAdded;
	uint32_t variableBase = 0;		// how far into the variable stack we are
	uint32_t variableOffset = 0;	// how far past the variable base we are

	std::set<std::string> captureVariablesAvailable;
	uint32_t captureSlot = 0;

	std::shared_ptr<std::vector<CompiledType>> typeStack = nullptr;
};

class Compiler : public ast::Visitor
{
public:
	static Compiler Create(CompilerEnvironment&& env = {});

	CompiledProgram Compile(ast::Node& node);

private:
	Compiler(CompilerEnvironment&& env);

private:
	virtual void Visit(const ast::SeqTermNode& node) override;
	virtual void Visit(const ast::SeqNilNode& node) override;
	virtual void Visit(const ast::SeqVarNode& node) override;
	virtual void Visit(const ast::SeqAppNode& node) override;
	virtual void Visit(const ast::SeqAppLitNode& node) override;
	virtual void Visit(const ast::SeqAbsNode& node) override;
	virtual void Visit(const ast::SeqLocAppNode& node) override;
	virtual void Visit(const ast::SeqLocAbsNode& node) override;
	virtual void Visit(const ast::SeqCondsNode& node) override;
	virtual void Visit(const ast::SeqOpNode& node) override;

private:
	void OmitInstruction(CompiledInstruction::Opcode opcode, CompiledInstruction::Operand operand);

	std::pair<uint32_t, CompiledType> AddLiteral(const ast::LitNode& lit);
	uint32_t AddClosure(const ast::SeqAppNode& app);

	std::tuple<uint32_t, bool, CompiledType> ResolveVariable(const std::string& name);

private:
	CompilerEnvironment m_Env;
	CompiledProgram m_Program;
};

Compiler Compiler::Create(CompilerEnvironment&& env)
{
	if (!env.variableStack)
	{
		env.variableStack = std::make_shared<decltype(env.variableStack)::element_type>();
	}
	if (!env.typeStack)
	{
		env.typeStack = std::make_shared<decltype(env.typeStack)::element_type>();
	}

	return Compiler(std::move(env));
}

CompiledProgram Compiler::Compile(ast::Node& node)
{
	node.Accept(*this);

	// if (m_Env.typeStack->empty())
	// {
	// 	Unimplemented("Program didn't return a value", node);
	// }
	// else if (m_Env.typeStack->size() > 1)
	// {
	// 	Unimplemented("Program returned too many values", node);
	// }

	return m_Program;
}

// void Compiler::PrintProgram() const
// {
// 	std::cout << "Literals:" << std::endl;
// 	{
// 		size_t index = 0;
// 		for (const auto& literal : m_Program.literals)
// 		{
// 			std::string value = "(unknown)";

// 			switch (literal.kind)
// 			{
// 				case Closee::Kind::S32:
// 					value = std::to_string(literal.As<S32_t>());
// 					break;
// 			}

// 			std::cout << std::format("{}: {}", index, value) << std::endl;

// 			++index;
// 		}
// 	}

// 	std::cout << "Closures:" << std::endl;
// 	{
// 		size_t index = 0;
// 		for (const auto& closure : m_Program.closures)
// 		{
// 			std::string instructionOffset = std::to_string(closure.instructionOffset);
// 			std::string captures;

// 			size_t captureIndex = 0;
// 			for (const auto& capture : closure.captures)
// 			{
// 				if (capture.scope == CaptureScope::ParentLocal)
// 				{
// 					captures += std::format("  {}: captured from parent at {}\n", captureIndex, capture.offset);
// 				}
// 				else if (capture.scope == CaptureScope::ParentCapture)
// 				{
// 					captures += std::format("  {}: re-captured from parent slot {}\n", captureIndex, capture.offset);
// 				}
// 				++captureIndex;
// 			}

// 			std::cout << std::format("{}: jump to {}", index, instructionOffset) << std::endl;
// 			std::cout << captures << std::endl;

// 			++index;
// 		}
// 	}

// 	std::cout << "Instructions:" << std::endl;
// 	{
// 		size_t index = 0;
// 		for (const auto& instuction : m_Program.instructions)
// 		{
// 			std::string opcode = "(unknown)";
// 			std::string operand = std::to_string(instuction.operand);

// 			switch (instuction.opcode)
// 			{
// 				case Opcode::PushLiteral:
// 				{
// 					size_t literalIndex = static_cast<size_t>(instuction.operand);
// 					opcode = "push-literal";
// 					// TODO: do a proper literal look-up!
// 					operand = std::format("push {}", literalIndex);
// 					break;
// 				}
// 				case Opcode::PushVariable:
// 				{
// 					// TODO: need a way to get variable info for a closure!
// 					size_t variableOffset = static_cast<size_t>(instuction.operand);
// 					opcode = "push-variable";
// 					operand = std::format("push from {}", variableOffset);
// 					break;
// 				}
// 				case Opcode::PushVariableCapture:
// 				{
// 					// TODO: need a way to get variable info for a closure!
// 					size_t variableCaptureSlot = static_cast<size_t>(instuction.operand);
// 					opcode = "push-variable-capture";
// 					operand = std::format("push from slot {}", variableCaptureSlot);
// 					break;
// 				}
// 				case Opcode::PushClosure:
// 				{
// 					size_t closureIndex = static_cast<size_t>(instuction.operand);
// 					opcode = "push-closure";
// 					operand = std::format("push {}", closureIndex);
// 					break;
// 				}
// 				case Opcode::BindVariable:
// 				{
// 					// TODO: need a way to get variable info for a closure!
// 					size_t variableOffset = static_cast<size_t>(instuction.operand);
// 					opcode = "bind-variable";
// 					operand = std::format("bind in {}", variableOffset);
// 					break;
// 				}
// 				case Opcode::Call:
// 				{
// 					size_t variableOffset = static_cast<size_t>(instuction.operand);
// 					opcode = "call";
// 					operand = std::format("call {}", variableOffset);
// 					break;
// 				}
// 				case Opcode::Return:
// 					opcode = "return";
// 					operand = "\n";
// 					break;
// 			}

// 			std::cout << std::format("{}: {} ; {}", index, opcode, operand) << std::endl;

// 			++index;
// 		}
// 	}
// }

Compiler::Compiler(CompilerEnvironment&& env)
	: m_Env(std::move(env))
{
}

void Compiler::Visit(const ast::SeqTermNode& node)
{
}

void Compiler::Visit(const ast::SeqNilNode& node)
{
	Debug("Visiting SeqNilNode", node);

	CompiledInstruction::Opcode opcode = CompiledInstruction::Return;
	CompiledInstruction::Operand operand = 0;
	OmitInstruction(opcode, operand);
}

void Compiler::Visit(const ast::SeqVarNode& node)
{
	Debug("Visiting SeqVarNode", node);

	std::string name = node.Name;
	auto [offset, isCapture, type] = ResolveVariable(name);

	if (type != CompiledType::Closure)
	{
		Unimplemented("Variable '{}' of type '{}' cannot be called", node, name, GetTypeName(type));
		return;
	}

	CompiledInstruction::Opcode opcode = CompiledInstruction::NoOp;
	CompiledInstruction::Operand operand = 0;

	if (isCapture)
	{
		opcode = CompiledInstruction::CallCapture;
		operand = offset;
		Debug("Calling from slot {}", node, offset);
	}
	else
	{
		opcode = CompiledInstruction::Call;
		operand = offset;
		Debug("Calling from {}", node, offset);
	}

	OmitInstruction(opcode, operand);

	if (node.Next)
	{
		node.Next->Accept(*this);
	}
}

void Compiler::Visit(const ast::SeqAppNode& node)
{
	Debug("Visiting SeqAppNode", node);

	CompiledInstruction::Opcode opcode = CompiledInstruction::NoOp;
	CompiledInstruction::Operand operand = 0;

	// TODO: use a resolver for this
	if (auto seqVarNode = dynamic_cast<ast::SeqVarNode*>(node.Arg.get()))
	{
		std::string name = seqVarNode->Name;
		auto [offset, isCapture, type] = ResolveVariable(name);

		if (isCapture)
		{
			opcode = CompiledInstruction::PushVariableCapture;
			operand = offset;
			m_Env.typeStack->emplace_back(type);
			Debug("Pushing variable from slot {}", node, offset);
		}
		else
		{
			opcode = CompiledInstruction::PushVariable;
			operand = offset;
			m_Env.typeStack->emplace_back(type);
			Debug("Pushing variable from {}", node, offset);
		}
	}
	else
	{
		uint32_t index = AddClosure(node);
		opcode = CompiledInstruction::PushClosure;
		operand = index;
		m_Env.typeStack->emplace_back(CompiledType::Closure);
		Debug("Pushing closure from slot {}", node, index);
	}

	OmitInstruction(opcode, operand);

	if (node.Next)
	{
		node.Next->Accept(*this);
	}
}

void Compiler::Visit(const ast::SeqAppLitNode& node)
{
	Debug("Visiting SeqAppLitNode", node);

	auto [index, type] = AddLiteral(*node.Lit);
	CompiledInstruction::Opcode opcode = CompiledInstruction::PushLiteral;
	CompiledInstruction::Operand operand = index;
	m_Env.typeStack->emplace_back(type);
	Debug("Pushing literal from slot {}", node, index);
	OmitInstruction(opcode, operand);

	if (node.Next)
	{
		node.Next->Accept(*this);
	}
}

void Compiler::Visit(const ast::SeqAbsNode& node)
{
	Debug("Visiting SeqAbsNode", node);

	std::string name = node.Binder->Name;
	uint32_t localOffset = m_Env.variableOffset;
	++m_Env.variableOffset;

	CompiledType type;
	if (m_Env.typeStack->empty())
	{
		Unimplemented("Could not determine type of bound variable '{}'", node, name);
		return;
	}
	type = m_Env.typeStack->back();
	m_Env.typeStack->pop_back();

	Debug("Binding {} in {}", node, name, localOffset);
	CompilerVariableInfo variable;
	variable.name = name;
	variable.localOffset = localOffset;
	variable.type = type;
	m_Env.variableStack->emplace_back(variable);
	m_Env.variablesAdded.emplace(name);

	CompiledInstruction::Opcode opcode = CompiledInstruction::BindVariable;
	CompiledInstruction::Operand operand = localOffset;
	OmitInstruction(opcode, operand);

	if (node.Next)
	{
		node.Next->Accept(*this);
	}

	Debug("Unbinding {} from {}", node, name, localOffset);
	m_Env.variablesAdded.erase(name);
	m_Env.variableStack->pop_back();
}

void Compiler::Visit(const ast::SeqLocAppNode& node)
{
	if (node.Next)
	{
		node.Next->Accept(*this);
	}
}

void Compiler::Visit(const ast::SeqLocAbsNode& node)
{
	if (node.Next)
	{
		node.Next->Accept(*this);
	}
}

void Compiler::Visit(const ast::SeqCondsNode& node)
{
	if (node.Next)
	{
		node.Next->Accept(*this);
	}
}

void Compiler::Visit(const ast::SeqOpNode& node)
{
	if (node.Next)
	{
		node.Next->Accept(*this);
	}
}

void Compiler::OmitInstruction(CompiledInstruction::Opcode opcode, CompiledInstruction::Operand operand)
{
	auto it = m_Program.instructions.begin();
	std::advance(it, m_Env.instructionBase);
	m_Program.instructions.emplace(it, opcode, operand);
	++m_Env.instructionBase;
	for (auto& closure : m_Program.closures)
	{
		// Rebase closure offset
		++closure.instructionOffset;
	}
}

std::pair<uint32_t, CompiledType> Compiler::AddLiteral(const ast::LitNode& lit)
{
	CompiledClosee literal = LitResolver(lit).GetClosee();
	size_t index = m_Program.literals.size();
	m_Program.literals.emplace_back(literal);
	return { static_cast<uint32_t>(index), literal.type };
}

uint32_t Compiler::AddClosure(const ast::SeqAppNode& app)
{
	Debug("Started compiling: instruction {}", app, m_Env.instructionBase);

	CompilerEnvironment newEnv;
	newEnv.instructionBase = 0;
	newEnv.variableStack = m_Env.variableStack;
	newEnv.variablesAdded = {};
	newEnv.variableBase = m_Env.variableStack->size();
	newEnv.variableOffset = 0;
	newEnv.captureVariablesAvailable = m_Env.variablesAdded;
	newEnv.captureSlot = 0;
	newEnv.typeStack = m_Env.typeStack;
	Compiler compiler = Compiler::Create(std::move(newEnv));
	compiler.Compile(*app.Arg);

	Debug("Finished compiling closure: literals = {}, closures = {}", app, compiler.m_Program.literals.size(), compiler.m_Program.closures.size());

	uint32_t literalBase = m_Program.literals.size(); 
	uint32_t closureInstructionBase = m_Program.instructions.size();
	for (auto literal : compiler.m_Program.literals)
	{
		// Rebase literal offset
		m_Program.literals.emplace_back(literal);
	}
	for (auto closure : compiler.m_Program.closures)
	{
		// Rebase closure offset
		closure.instructionOffset += closureInstructionBase;
		m_Program.closures.emplace_back(closure);
	}
	for (auto instruction : compiler.m_Program.instructions)
	{
		switch (instruction.opcode)
		{
			case CompiledInstruction::PushLiteral:
				// Rebase literal offset for instruction
				instruction.operand += literalBase;
				break;
		}
		// Add instructions to end
		m_Program.instructions.emplace_back(instruction);
	}

	std::map<uint32_t, CompiledCapture> captures;

	// Look for the variable from innermost to outermost
	for (int i = static_cast<int>(compiler.m_Env.variableBase) - 1; i >= 0; --i)
	{
		const auto& variable = (*compiler.m_Env.variableStack)[i];
		if (i >= static_cast<int>(m_Env.variableBase) && variable.isCaptured)
		{
			captures.emplace(std::piecewise_construct,
				std::forward_as_tuple(variable.captureSlot),
				std::forward_as_tuple(CompiledCapture::ParentLocal, variable.localOffset));
		}
		else if (i < static_cast<int>(m_Env.variableBase) && variable.isRecaptured)
		{
			captures.emplace(std::piecewise_construct,
				std::forward_as_tuple(variable.captureSlot),
				std::forward_as_tuple(CompiledCapture::ParentCapture, variable.recaptureSlot));
		}
	}

	// Create the capture
	size_t closureIndex = m_Program.closures.size();
	CompiledClosure closure;
	closure.instructionOffset = static_cast<uint32_t>(closureInstructionBase);
	for (auto [captureSlot, variable] : captures)
	{
		closure.captures.emplace_back(variable);
	}
	m_Program.closures.emplace_back(closure);
	return static_cast<uint32_t>(closureIndex);
}

std::tuple<uint32_t, bool, CompiledType> Compiler::ResolveVariable(const std::string& name)
{
	DebugNoNode("Searching for variable '{}': variable base = {}", name, m_Env.variableBase);

	// Look for the variable from innermost to outermost
	for (int i = static_cast<int>(m_Env.variableStack->size()) - 1; i >= 0; --i)
	{
		auto& variable = (*m_Env.variableStack)[i];
		if (variable.name == name)
		{
			uint32_t offset = 0;
			bool isCapture = false;
			CompiledType type = CompiledType::Unit;
			DebugNoNode("Found variable '{}' at index {}", name, i);
			if (i < static_cast<int>(m_Env.variableBase) && m_Env.captureVariablesAvailable.count(variable.name) == 0)
			{
				DebugNoNode("(Re-Captured) variable '{}' to push is at index {}, capture slot = {}", name, i, m_Env.captureSlot);
				offset = m_Env.captureSlot;
				++m_Env.captureSlot;
				isCapture = true;
				type = variable.type;
				variable.isRecaptured = true;
				variable.recaptureSlot = variable.captureSlot;
				variable.isCaptured = true;
				variable.captureSlot = offset;
			}
			else if (i < static_cast<int>(m_Env.variableBase))
			{
				DebugNoNode("(Captured) variable '{}' to push is at index {}, capture slot = {}", name, i, m_Env.captureSlot);
				offset = m_Env.captureSlot;
				++m_Env.captureSlot;
				isCapture = true;
				type = variable.type;
				variable.isCaptured = true;
				variable.captureSlot = offset;
			}
			else
			{
				DebugNoNode("Variable '{}' to push is at index {}, local offset = {}", name, i, variable.localOffset);
				offset = variable.localOffset;
				isCapture = false;
				type = variable.type;
			}
			return { offset, isCapture, type };
		}
	}

	UnimplementedNoNode("Could not find variable {}", name);

	return { 0, false, CompiledType::Unit };
}

} // namespace compile
} // namespace fmcs