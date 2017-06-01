// Deque.h
// Brian Keppinger

#pragma once

#include "DoublyLinkedList.h"

class Deque
{

public:
	// Default constructor
	Deque::Deque(void);

	// Default destructor
	Deque::~Deque(void);

	void Deque::InitializeDeque();
	void Deque::EnqueueFront(int);
	Node* Deque::DequeueFront();
	void Deque::EnqueueBack(int);
	Node* Deque::DequeueBack();
	Node* Deque::PeekFront();
	Node* Deque::PeekBack();
	bool Deque::b_IsEmpty();
	void Deque::Print();

private:
	DoublyLinkedList dequeElements;

};