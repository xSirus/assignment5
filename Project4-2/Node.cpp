// File Prologue
// Name:       Joel Harrison
// File:       Node.cpp
// Instructor: Craig Garnder
// Class:      CS 2450
// Assignment: 5
// Date:       5/30/2014
// 
// This is the Node class. It creates nodes that contain a name and a priority integer.


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