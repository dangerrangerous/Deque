// DoublyLinkedList.h
// Brian Keppinger

#pragma once

using namespace std;

// class DoublyLinkedList;

struct Node
{
	friend class DoublyLinkedList;

public:
	// Constructors
	Node(void);
	Node(int, Node*);

	// Destructor
	~Node(void);

private:
	int data;
	Node* previous;
	Node* next;
};

class DoublyLinkedList
{
public:
	DoublyLinkedList(void);
	~DoublyLinkedList(void);

	void DoublyLinkedList::DestroyList();
	Node* GetFirst();
	void DoublyLinkedList::InitializeList();
	
	void DoublyLinkedList::InsertFirst(int);
	void DoublyLinkedList::InsertLast(int);
	bool DoublyLinkedList::IsEmpty();
	
	void DoublyLinkedList::DeleteFirst();
	void DoublyLinkedList::DeleteLast();
	void DoublyLinkedList::DeleteNode();

	void DoublyLinkedList::InsertNode(Node* inNode);
	int DoublyLinkedList::NodeCount(DoublyLinkedList* inList);

private:
	Node* firstNode;
	Node* nextNode;
	Node* lastNode;
};
