#pragma once
// Menu Header file
// Brian Keppinger

#include <string>
#include "stdafx.h"
#include "DoublyLinkedList.h"
#include "Deque.h"

using namespace std;

enum MenuChoices { Quit, EnqueueFront, DequeueFront,
	EnqueueBack, DequeueBack, PeekFront, PeekBack, Print
};

class Menu
{
public:
	// Default constructor
	Menu(void);
	// Default destructor
	~Menu(void);

	// Accessor
	MenuChoices Menu::Get();

	// Mutator
	void Menu::Set(MenuChoices);
	void Menu::Display();
	void Menu::QueryUser();
	bool Menu::Continue();
	void Menu::ProcessCommand(Deque&);

private:

	MenuChoices userMenuSelection;

};