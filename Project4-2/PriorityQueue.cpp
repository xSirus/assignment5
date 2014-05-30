// File Prologue
// Name:       Joel Harrison
// File:       PriorityQueue.cpp
// Instructor: Craig Garnder
// Class:      CS 2450
// Assignment: 5
// Date:       5/30/2014
// 
// This is the code for the PriorityQueue class. 

// I declare that the following source code was written solely by me.
// I understand that copying any source code, in whole or in part, constitutes cheating, 
// and that I will receive a zero on this project if I am found in violation of this policy.
// -----------------------------------------------------------------------------------------

#include "PriorityQueue.h"
#include "Node.h"

using namespace std;

PriorityQueue::PriorityQueue()
{
	head = NULL;
	counter = 0;
}

PriorityQueue::~PriorityQueue()
{
	clear();
}

void PriorityQueue::insert(string name, int num)
{
	if(head == NULL)//if nothing is in the list
	{
		head = new Node(name, num);
		counter++;
	}
	else//insert the new node in the proper spot(sorted highest priority to lowest)
	{
		Node* p, *q;
		p = head;
		q = new Node(name, num);
		//this is where the sorting happens!!!!  Yay for sorting!!
		if(q->priority < p->priority)
		{
			while(q->priority < p->priority && p->next != NULL)
				p = p->next;
			p->next = q;
		}
		else if(q->priority == p->priority)
		{//this inserts the new node behind the existing node with the same priority
			q->next = p->next;
			p->next = q;
		}
		else
		{
			head = q;
			q->next = p;
		}
		counter++;
	}
}

int PriorityQueue::size()
{
	return counter;
}

void PriorityQueue::pop()
{
	Node* oldTop = head;//create a temp node
	if (head == NULL)
		cout << "Nothing to pop." << endl;
	else
	{
		head = oldTop->getNext();//set the first node to the next nod ein list
		delete oldTop;//delete the old first node
		counter--;
	}
}

void PriorityQueue::clear()
{
	while(head != NULL)
		pop();
}

void PriorityQueue::print()
{
	Node *p;
	p = head;
	cout << endl;
	if(counter == 0)
		cout << "Empty File.  Slow day at the ER?" << endl;
	else
	{
		while(p != NULL)
		{
			cout << p->entry << endl;
			p = p->next;
		}
	}
}