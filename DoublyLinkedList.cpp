

#include "stdafx.h"
#include "DoublyLinkedList.h"

using namespace std;

// Constructor
Node::Node(void)
{
	data = 0;
	previous = nullptr;
	next = nullptr;
}

// Constructor
/*
Node::Node(int inElement, Node* nodePtr)
{
	data = inElement;
	// 
	previous = previous->next;
	next = nodePtr;
}
*/
Node::Node(int inValue)
{
	data = inValue;
	previous = nullptr;
	next = nullptr;
}

// Destructor
Node::~Node(void)
{

}

DoublyLinkedList::DoublyLinkedList(void)
{

}

DoublyLinkedList::~DoublyLinkedList(void)
{

}

void DoublyLinkedList::DestroyList()
{
	Node* temp;
	
	while (firstNode != nullptr)
	{
		temp = firstNode;
		firstNode = firstNode->next;
		delete temp;
	}

	lastNode = nullptr;
} // end DestroyList()

Node* DoublyLinkedList::GetFirst()
{
	return firstNode;
} // end GetFirst()

void DoublyLinkedList::InitializeList()
{
	DestroyList();
} // end InitializeList

void DoublyLinkedList::InsertFirst(int inValue)
{
	Node* newNode = new Node(inValue);
	
	if (firstNode != nullptr)
	{
		firstNode->previous = newNode;
		newNode->next = firstNode;
		firstNode = newNode;
	}

	if (firstNode == nullptr)
	{
		firstNode = newNode;
	}

	if (lastNode == nullptr)
	{
		lastNode = firstNode;
	}
} // end InsertFirst()

void DoublyLinkedList::InsertLast(int inValue)
{
	Node* newNode = new Node(inValue);

	if (lastNode == nullptr)
	{
		lastNode = newNode;
	}
	else
	{
		lastNode->next = newNode;
		newNode->previous = lastNode;
		lastNode = newNode;
	}
}