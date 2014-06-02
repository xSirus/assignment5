// File Prologue
// Name:       Joel Harrison
// File:       PriorityQueue.h
// Instructor: Craig Garnder
// Class:      CS 2450
// Assignment: 5
// Date:       5/30/2014
// 
// PriorityQueue keeps track of the nodes in the queue based on a priority associated with the node.

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