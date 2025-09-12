#pragma once

#include "compile/Compiler.hpp"

#include <cinttypes>
#include <cstring>

#include <vector>

namespace fmcs {
namespace vm {

// A value is just a 64-bit bucket (int/ptr)
using Value = uintptr_t;

// Runtime closure object
struct RuntimeClosure
{
	uint32_t ip;					// instruction to start at
	std::vector<Value> captures;	// values captured
};

// One stack frame
struct Frame
{
	uint32_t returnIp;			// instruction to return to
	Frame* caller;				// frame which called us
	RuntimeClosure* closure;	// closure that owns this frame
	std::vector<Value> locals;	// local variables for this frame
};

class Vm
{
public:
	Value Run(const compile::CompiledProgram* program)
	{
		m_Program = program;
		
		Frame* frame = new Frame();
		frame->returnIp = 0;
		frame->caller = nullptr;
		frame->closure = nullptr;

		m_Ip = 0;
		m_Frame = frame;

		while (true)
		{
			const compile::CompiledInstruction& instruction = m_Program->instructions[m_Ip++];

			switch (instruction.opcode)
			{
				case compile::CompiledInstruction::PushLiteral:
				{
					Value v = m_Program->literals[instruction.operand];
					Push(v);
					break;
				}
				case compile::CompiledInstruction::BindVariable:
				{
					Value v = Pop();
					EnsureLocals(instruction.operand + 1);
					m_Frame->locals[instruction.operand] = v;
					break;
				}
				case compile::CompiledInstruction::PushVariable:
				{
					Value v = m_Frame->locals[instruction.operand];
					Push(v);
					break;
				}
				case compile::CompiledInstruction::PushVariableCapture:
				{
					Value v = m_Frame->closure->captures[instruction.operand];
					Push(v);
					break;
				}
				case compile::CompiledInstruction::PushClosure:
				{
					const compile::CompiledClosure& closure = m_Program->closures[instruction.operand];

					// TODO: we're not freeing these.. need a way to know when they're not referenced, gc?
					RuntimeClosure* obj = new RuntimeClosure{closure.instructionOffset, {}};
					obj->captures.resize(closure.captures.size());
					for (size_t i = 0; i < closure.captures.size(); i++)
					{
						const compile::CompiledCapture& capture = closure.captures[i];
						if (capture.source == compile::CompiledCapture::ParentLocal)
						{
							obj->captures[i] = m_Frame->locals[capture.offset];
						}
						else
						{
							obj->captures[i] = m_Frame->closure->captures[capture.offset];
						}
					}

					Push(reinterpret_cast<Value>(obj));

					break;
				}
				case compile::CompiledInstruction::Call:
				{
					Value v = m_Frame->locals[instruction.operand];
					RuntimeClosure* obj = reinterpret_cast<RuntimeClosure*>(v);

					Frame* frame = new Frame();
					frame->returnIp = m_Ip;
					frame->caller = m_Frame;
					frame->closure = obj;
					m_Frame = frame;

					m_Ip = obj->ip;

					break;
				}
				case compile::CompiledInstruction::CallCapture:
				{
					const compile::CompiledClosure& closure = m_Program->closures[instruction.operand];

					RuntimeClosure* obj = nullptr;
					for (size_t i = 0; i < closure.captures.size(); i++)
					{
						const compile::CompiledCapture& capture = closure.captures[i];
						if (capture.source == compile::CompiledCapture::ParentLocal)
						{
							obj = reinterpret_cast<RuntimeClosure*>(m_Frame->locals[capture.offset]);
						}
						else
						{
							obj = reinterpret_cast<RuntimeClosure*>(m_Frame->closure->captures[capture.offset]);
						}
					}

					Frame* frame = new Frame();
					frame->returnIp = m_Ip;
					frame->caller = m_Frame;
					frame->closure = obj;
					m_Frame = frame;

					m_Ip = obj->ip;

					break;
				}
				case compile::CompiledInstruction::Return:
				{
					if (m_Frame->caller == nullptr)
					{
						return Pop();
					}

					m_Ip = m_Frame->returnIp;

					Frame* frame = m_Frame;
					m_Frame = frame->caller;
					delete frame;

					break;
				}
			}
		}
	}

private:
	void Push(Value v)
	{
		m_Stack.push_back(v);
	}

	Value Pop()
	{
		Value v = m_Stack.back();
		m_Stack.pop_back();
		return v;
	}

	void EnsureLocals(size_t n)
	{
		if (m_Frame->locals.size() < n)
		{
			m_Frame->locals.resize(n);
		}
	}

private:
	const compile::CompiledProgram* m_Program = nullptr;

	uint32_t m_Ip = 0;			// instruction pointer
	std::vector<Value> m_Stack;	// operand stack
	Frame* m_Frame = nullptr;	// current call frame
};

} // namespace vm
} // namespace fmcs