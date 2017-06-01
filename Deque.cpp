// Deque.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "DoublyLinkedList.h"
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

