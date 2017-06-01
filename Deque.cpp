// Deque.cpp : Defines the entry point for the console application.
// Brian Keppinger

#include "stdafx.h"
#include "DoublyLinkedList.h"
#include "Deque.h"
/*
1) EnqueueFront 
2) DequeFront 
3) EnqueueBack 
4) DequeBack 
5) PeekFront 
6) PeekBack 
7) Any other operators that you feel are useful, especially in the implementation of the six listed operators. 
8) Utilize an instance of the Deque class in the main function so that all operators are tested.

Use an instance of the DoublyLinkedList class as the fundamental structure to hold Deque values.

*/
using namespace std;

// Default constructor
Deque::Deque(void)
{
	dequeElements.InitializeList();
}

// Default destructor
Deque::~Deque(void)
{
	dequeElements.InitializeList();
}

void Deque::InitializeDeque()
{
	dequeElements.InitializeList();
}

void Deque::EnqueueFront(int data)
{
	dequeElements.InsertFirst(data);
}

Node* Deque::DequeueFront()
{
	Node* temp = dequeElements.GetFirst();
	dequeElements.DeleteFirst();
	return temp;
}

void Deque::EnqueueBack(int data)
{
	dequeElements.InsertLast(data);
}








int main()
{
	DoublyLinkedList dblList;

	dblList.InitializeList();

	dblList.IsEmpty();

	dblList.InsertFirst(3);
	dblList.InsertFirst(2);
	dblList.InsertFirst(1);

	dblList.InsertLast(4);

	dblList.IsEmpty();
	
//	dblList.DeleteFirst();
//	dblList.DeleteLast();

	dblList.Find(3);
//	dblList.DeleteNode(1);
//	dblList.DeleteNode(4);
//	dblList.DeleteNode(2);
	dblList.InsertNodeAfter(3, 7);
	dblList.InsertNodeBefore(7, 6);
	dblList.NodeCount();

    return 0;
}

