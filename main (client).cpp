// Online-Address-Book.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "addressBookType.h"

// Displays a menu interface for user to interact with
// Postcondition: returns the user’s selection
int showMenu();

int main()
{
	string lastName;
	int birthMonth;
	string relation;
	addressBookType list;
	
	list.initEntry();
	int choice = showMenu();

	do
	{
		switch (choice)
		{
		case 1:
			cout << "Enter last name: ";
			cin >> lastName;
			cout << endl;
			list.findPerson(lastName);
			break;
		case 2:
			cout << "Enter birth month: ";
			cin >> birthMonth;
			cout << endl;
			list.findBirthday(birthMonth);
			break;
		case 3:
			cout << "Enter relationship: ";
			cin >> relation;
			cout << endl;
			list.findRelations(relation);
			break;
		case 4:
			cout << "Sorting entries...\n" << endl;
			list.sortEntries();
			break;
		case 5:
			cout << "Printing entries...\n" << endl;
			list.print();
			break;
		case 6:
			break;
		default:
			cout << "Invalid choice\n" << endl;
			break;
		}
		choice = showMenu(); 
	} while (choice != 6);

	return 0;
};

int showMenu()
{
	int choice; 

	cout << "MAIN MENU" << endl;
	cout << "Enter options 1-6" << endl;
	cout << "1 - Find entries containing last name" << endl;
	cout << "2 - Find entries by birth month" << endl;
	cout << "3 - Find entries by relationship" << endl;
	cout << "4 - Sort entries" << endl;
	cout << "5 - Print entire address book" << endl;
	cout << "6 - Quit" << endl;
	cin >> choice;
	cout << endl;
	
	return choice;
}