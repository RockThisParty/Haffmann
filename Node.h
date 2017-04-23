#pragma once
#include <iostream>
#include <vector>
#include <map>
#include <list>
#include <fstream>

using namespace std;

class Node
{
public:
	int a;
	char c;
	Node *left_child, *right_child;

	Node()
	{
		left_child = right_child = NULL;
	}

	Node(Node *L, Node *R)
	{
		left_child = L;
		right_child = R;
		a = L->a + R->a;
	}
};