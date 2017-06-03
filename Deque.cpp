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

Node* Deque::DequeueBack()
{
	Node* temp = dequeElements.GetLast();
	dequeElements.DeleteLast();
	return temp;
}

Node* Deque::PeekFront()
{
	return dequeElements.GetFirst();
}

Node* Deque::PeekBack()
{
	return dequeElements.GetLast();
}

void Deque::Print()
{
	dequeElements.Display();
}

int main()
{
	Deque deque;
	deque.InitializeDeque();
	deque.EnqueueFront(42);
	deque.EnqueueBack(24);
	deque.DequeueFront();
	deque.DequeueBack();

	for (int i = 0; i < 10; i++)
	{
		deque.EnqueueFront(i);
	}
	deque.Print();

    return 0;
}

