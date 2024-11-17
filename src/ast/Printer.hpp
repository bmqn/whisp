
#ifndef H_PRINTER_H
#define H_PRINTER_H

#include "Tree.hpp"

namespace fmcs {
namespace ast {

class Printer : public Visitor
{
private:
	void Visit(const Int32LitNode& node) override
	{
		DisplayIntentedNode(std::format("Int32LitNode '{}'", node.Val));
	}

	void Visit(const StrLitNode& node) override
	{
		DisplayIntentedNode(std::format("StrLitNode '{}'", node.Val));
	}

	void Visit(const VarNode& node) override
	{
		DisplayIntentedNode(std::format("VarNode '{}'", node.Name));
	}

	void Visit(const SeqNilNode& node) override
	{
		DisplayIntentedNode("SeqNilNode");
	}

	void Visit(const SeqVarNode& node) override
	{
		DisplayIntentedNode(std::format("SeqVarNode '{}'", node.Name));

		IncreaseIndent("|");

		DecreaseIndent();

		if (node.Next)
		{
			DisplayIntentedNext();

			node.Next->Accept(*this);
		}
	}

	void Visit(const SeqAppNode& node) override
	{
		DisplayIntentedNode("SeqAppNode: ");

		IncreaseIndent("|");

		if (node.Arg)
		{
			DisplayIntentedSubnode("Argument");

			IncreaseIndent("  ");

			node.Arg->Accept(*this);

			DecreaseIndent();
		}

		if (node.Loc)
		{
			DisplayIntentedSubnode("Location");

			IncreaseIndent("  ");

			node.Loc->Accept(*this);

			DecreaseIndent();
		}

		DecreaseIndent();

		if (node.Next)
		{
			DisplayIntentedNext();

			node.Next->Accept(*this);
		}
	}

	void Visit(const SeqAppLitNode& node) override
	{
		DisplayIntentedNode("SeqAppLitNode");

		IncreaseIndent("|");

		if (node.Lit)
		{
			DisplayIntentedSubnode("Literal");

			IncreaseIndent("  ");

			node.Lit->Accept(*this);

			DecreaseIndent();
		}

		if (node.Loc)
		{
			DisplayIntentedSubnode("Location");

			IncreaseIndent("  ");

			node.Loc->Accept(*this);

			DecreaseIndent();
		}

		DecreaseIndent();

		if (node.Next)
		{
			DisplayIntentedNext();

			node.Next->Accept(*this);
		}
	}

	void Visit(const SeqAbsNode& node) override
	{
		DisplayIntentedNode("SeqAbsNode");

		IncreaseIndent("|");

		if (node.Loc)
		{
			DisplayIntentedSubnode("Location");

			IncreaseIndent("  ");

			node.Loc->Accept(*this);

			DecreaseIndent();
		}

		if (node.Binder)
		{
			DisplayIntentedSubnode("Binder");

			IncreaseIndent("  ");

			node.Binder->Accept(*this);

			DecreaseIndent();
		}

		DecreaseIndent();

		if (node.Next)
		{
			DisplayIntentedNext();

			node.Next->Accept(*this);
		}
	}

private:
	void DisplayIntentedNode(const std::string& str) const
	{
		for (size_t i = 0; i < m_Indents.size(); ++i)
		{
			std::cout << m_Indents[i];
		}

		std::cout << "> " << str << std::endl;
	}

	void DisplayIntentedSubnode(const std::string& str) const
	{
		for (size_t i = 0; i < m_Indents.size(); ++i)
		{
			std::cout << m_Indents[i];
		}

		std::cout << "  " << str << std::endl;
	}

	void DisplayIntentedNext() const
	{
		for (size_t i = 0; i < m_Indents.size(); ++i)
		{
			std::cout << m_Indents[i];
		}

		std::cout << "." << std::endl;
	}

	void IncreaseIndent(const std::string& str = " ")
	{
		m_Indents.push_back(str);
	}

	void DecreaseIndent()
	{
		m_Indents.pop_back();
	}

private:
	std::vector<std::string> m_Indents;
};

} // namespace ast
} // namespace fmcs

#endif // H_PRINTER_H