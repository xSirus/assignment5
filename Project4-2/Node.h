// File Prologue
// Name:       Joel Harrison
// File:       Node.h
// Instructor: Craig Garnder
// Class:      CS 2450
// Assignment: 5
// Date:       5/30/2014
// This is the header file for the Node struct.

// I declare that the following source code was written solely by me, provided to me by the instructor, 
// or class materials. I understand that copying any source code not provided, in whole or in part, constitutes 
// cheating, and that I will receive a zero on this project if I am found in violation of this policy.
// ------------------------------------------------------------------------------------------------------------

#pragma once
#include <iostream>
#include<string>
#include <iostream>
#include<iomanip>

using namespace std;

struct Node
{
	// data members
	string entry;
	Node* next;
	int priority;

	// Constructors and functions

	// Default constructor
	// Purpose: creates a node for the list
	// Parameters: none
	// Returns: none
	Node();

	// Parameterized constructor
	// Purpose: creates a node for the list
	// Parameters: an int and a Node*
	// Returns: none
	Node(string name, int importance, Node* addOn = NULL);

	// setNext function
	// Purpose: sets the pointer to the next node
	// Parameters: a pointer
	// Returns: none
	void setNext(Node*);

	// getNext function
	// Purpose: returns the pointer of the next node
	// Parameters: none
	// Returns: a pointer
	Node* getNext() const;
};