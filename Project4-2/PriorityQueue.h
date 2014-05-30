// File Prologue
// Name:       Joel Harrison
// File:       List.h
// Instructor: Craig Garnder
// Class:      CS 2450
// Assignment: 5
// Date:       5/30/2014
// 
// PriorityQueue keeps track of the nodes in the queue based on a priority associated with the node.

// I declare that the following source code was written solely by me.
// I understand that copying any source code, in whole or in part, constitutes cheating, 
// and that I will receive a zero on this project if I am found in violation of this policy.
// -----------------------------------------------------------------------------------------

#pragma once
#include "Node.h"

using namespace std;

class PriorityQueue
{
protected:
	Node* head;
	int counter;
public:
	// Default constructor
	// Purpose: initializes head and counter
	// Parameters: none
	// Returns: none
	PriorityQueue();

	// Deconstructor
	// Purpose: deletes the queue 
	// Parameters: none
	// Returns: none
	~PriorityQueue();

	// Insert function
	// Purpose: inserts a person in the queue based on priority
	// Parameters: a string contianing a name and an integer for the priority
	// Returns: none
	void insert(string, int);

	// size function
	// purpose: to help determine the size of the queue
	// parameters: none
	// returns: an integer representing the number of nodes in the queue
	int size();

	// Pop function
	// Purpose: removes a node from the head of the queue
	// Parameters: none
	// Returns: none
	void pop();

	// Clear function
	// Purpose: uses the pop function to remove all nodes form queue
	// Parameters: none
	// Returns: none
	void clear();

	// print function
	// Purpose: visits each node in the queue
	// Parameters: none
	// Returns: none
	void print();
};