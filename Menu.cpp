// Menu.cpp
// Brian Keppinger

#include "stdafx.h"
#include "Menu.h"
#include "DoublyLinkedList.h"
#include "Deque.h"
#include <iostream>
#include <iomanip>

using namespace std;

// Default constructor
Menu::Menu(void)
{
	userMenuSelection = Quit;
}

// Default destructor
Menu::~Menu(void)
{
	cout << "Destroying Menu." << endl;
}

// Getter
MenuChoices Menu::Get()
{
	return userMenuSelection;
}

// Setter
void Menu::Set(MenuChoices newValue)
{
	userMenuSelection = newValue;
}

void Menu::Display()
{
	cout << endl;
	cout << left << setw(10) << "1: Quit" << endl;
	cout << left << setw(32) << "2: EnqueueFront" << left << setw(32) << "3: DequeueFront" << endl;
	cout << left << setw(32) << "4: EnqueueBack" << left << setw(32) << "5: DequeueBack" << endl;
	cout << left << setw(32) << "6: PeekFront" << left << setw(32) << "7: PeekBack" << endl;
	cout << left << setw(32) << "8: Print" << endl;
}

void Menu::QueryUser()
{
	int selection;

	cout << "Please enter menu selection." << endl;

	cin >> selection;

	switch (selection)
	{
	case 1: userMenuSelection = Quit;
		break;
	case 2: userMenuSelection = EnqueueFront;
		break;
	case 3: userMenuSelection = DequeueFront;
		break;
	case 4: userMenuSelection = EnqueueBack;
		break;
	case 5: userMenuSelection = DequeueBack;
		break;
	case 6: userMenuSelection = PeekFront;
		break;
	case 7: userMenuSelection = PeekBack;
		break;
	case 8: userMenuSelection = Print;
		break;

	default: userMenuSelection = Quit;
	} // end switch
} // end QueryUser()

bool Menu::Continue()
{
	return userMenuSelection != Quit;
}

void Menu::ProcessCommand(Deque& deque)
{
	int key;

	if (userMenuSelection != Quit)
	{

		switch (userMenuSelection)
		{
		case EnqueueFront:
			cout << "Please enter a value to be enqueued to the front." << endl;
			cin >> key;
			deque.EnqueueFront(key);
			cout << endl;
			break;

		case DequeueFront:
			cout << "Dequeue'ing the front." << endl;
			cout << deque.DequeueFront()->data;
			cout << endl;
			break;

		case EnqueueBack:
			cout << "Please enter a value to be enqueued to the back." << endl;
			cin >> key;
			deque.EnqueueBack(key);
			cout << endl;
			break;

		case DequeueBack:
			cout << "Dequeue'ing the back." << endl;
			cout << deque.DequeueBack()->data;
			cout << endl;
			break;

		case PeekFront:
			cout << "Peeking front." << endl;
			cout << deque.PeekFront()->data;
			cout << endl;
			break;

		case PeekBack:
			cout << "Peeking back." << endl;
			cout << deque.PeekBack()->data;
			cout << endl;
			break;

		case Print:
			cout << "Printing the dequeue." << endl;
			deque.Print();
			cout << endl;
			break;
		}
	}
}