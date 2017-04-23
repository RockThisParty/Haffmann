#pragma once
#include "Node.h"

class MyCompare
{
public:
	bool operator()(const Node* l, const Node* r) const
	{
		return l->a < r->a;
	}
};


vector<bool> code;
map<char, vector<bool> > table;

void BuildTable(Node *root)
{
	if (root->left_child != NULL)
	{
		code.push_back(0);
		BuildTable(root->left_child);
	}

	if (root->right_child != NULL)
	{
		code.push_back(1);
		BuildTable(root->right_child);
	}

	//if(root->c)
	if (root->left_child == NULL && root->right_child == NULL)
		table[root->c] = code;

	code.pop_back();
}