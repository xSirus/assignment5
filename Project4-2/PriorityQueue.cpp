// File Prologue
// Name:       Joel Harrison
// File:       PriorityQueue.cpp
// Instructor: Craig Garnder
// Class:      CS 2450
// Assignment: 5
// Date:       5/30/2014
// 
// This is the code for the PriorityQueue class. 


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
		Node* p, *q, *r;
		p = head;
		r = p;
		q = new Node(name, num);
		//this is where the sorting happens!!!!  Yay for my complex sorting algorithm!!
		if(q->priority < p->priority)
		{
			while(q->priority < p->priority && p->next != NULL)
			{
				r = p;
				p = p->next;
			}

			while(q->priority == p->priority && p->next != NULL)
			{//moves the new node to the back of the other nodes with same priority
				r = p;
				p = p->next;
			}
			if(p->priority < q->priority)
			{
				q->next = p;
				r->next = q;
			}
			else if(p->next == NULL)
			{
				r = p;
				q->next = p->next;
				r->next = q;
			}
			else
			{
				q->next = p;
				r->next = q;
			}
		}
		else if(q->priority == p->priority)
		{//this inserts the new node behind the existing node with the same priority
			while(q->priority == p->priority)
			{
				r = p;
				p = p->next;
			}
			q->next = p;
			r->next = q;
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