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
	extPersonType newEntry;
	
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
			cout << "Printing entries...\n" << endl;
			list.print();
			break;
		case 5:
			list.getNewEntryInfo(newEntry);
			break;
		case 6:
			list.removeEntry(newEntry);
			break;
		case 7:
			break;
		default:
			cout << "Invalid choice\n" << endl;
			break;
		}
		
		if (choice != 7)
		{
			choice = showMenu();
		}			
	} while (choice != 7);
	
	list.saveAddressBook();
	return 0;
};

int showMenu()
{
	int choice; 

	cout << "MAIN MENU" << endl;
	cout << "Enter options 1-7" << endl;
	cout << "1 - Find entries containing last name" << endl;
	cout << "2 - Find entries by birth month" << endl;
	cout << "3 - Find entries by relationship" << endl;
	cout << "4 - Print entire address book" << endl;
	cout << "5 - Add entry to address book" << endl;
	cout << "6 - Remove entry from address book" << endl;
	cout << "7 - Save and quit" << endl;
	cin >> choice;
	cout << endl;
	
	return choice;
}