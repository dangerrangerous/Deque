// DoublyLinkedList.h
// Brian Keppinger

#pragma once

using namespace std;

struct Node
{
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

	void DoublyLinkedList::InsertNode(Node* inNode);
	int DoublyLinkedList::NodeCount(DoublyLinkedList* inList);

private:
	Node* first;
	Node* last;
};
