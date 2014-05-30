// File Prologue
// Name:       Joel Harrison
// File:       Node.cpp
// Instructor: Craig Garnder
// Class:      CS 2450
// Assignment: 5
// Date:       5/30/2014
// 
// This is the Node class. It creates nodes that contain a name and a priority integer.

// I declare that the following source code was written solely by me. 
// I understand that copying any source code, in whole or in part, constitutes cheating, 
// and that I will receive a zero on this project if I am found in violation of this policy.
// -----------------------------------------------------------------------------------------

#include "Node.h"
#include <iostream>
using namespace std;

Node::Node()
{
	next = NULL;
}

Node::Node(string name, int importance, Node *addOn)
{
	entry = name;
	next = addOn;
	priority = importance;
}

void Node::setNext(Node* add)
{
	next = add;
}

Node* Node::getNext() const
{
	return next;
}