#include "addressBookType.h"

void addressBookType::initEntry()
{
	ifstream inFile;
	string firstName, lastName;
	int month, day, year;
	string addr, cty, st;
	int zip;
	string phone, relation; 
	
	inFile.open("AddressBookData.txt");
	if (!inFile.is_open())
	{
		cout << "Could not open file" << endl;
		return;
	}

	while (inFile >> firstName)
	{
		inFile >> lastName >> month >> day >> year;
		inFile.ignore();
		getline(inFile, addr);
		getline(inFile, cty);
		inFile >> st >> zip >> phone >> relation;

		extPersonType newEntry(firstName, lastName, month, day, year, addr, cty, st, zip, phone, relation);
		addEntry(newEntry);
	}
}

void addressBookType::addEntry(extPersonType newEntry)
{	
	if (length <= maxLength)
	{
		addressList[length] = newEntry; 
		length++;
	}
	else
	{
		cout << "Address book full" << endl;
	}
}

void addressBookType::print()
{
	for (int i = 0; i < length; i++)
	{
		addressList[i].print();
		cout << endl;
	}
}

void addressBookType::findPerson(string search)
{
	for (int i = 0; i < length; i++)
	{	
		if (addressList[i].getLastName() == search)
		{
			addressList[i].print();
			cout << endl;
		}
	}
}

void addressBookType::findBirthday(int search)
{
	for (int i = 0; i < length; i++)
	{
		if (addressList[i].getBirthMonth() == search)
		{
			addressList[i].print();
			cout << endl;
		}
	}
}

void addressBookType::findRelations(string search)
{
	for (int i = 0; i < length; i++)
	{
		if (addressList[i].getRelationship() == search)
		{
			addressList[i].print();
			cout << endl;
		}
	}
}

void addressBookType::sortEntries()
{
	int current = 1;
	extPersonType temp;

	while (current < length)
	{
		int index = current; 
		bool placeFound = false;
		
		while (index > 0 && !placeFound)
		{
			if (addressList[index].getLastName() < addressList[index - 1].getLastName())
			{
				temp = addressList[index];
				addressList[index] = addressList[index - 1];
				addressList[index - 1] = temp;
				index = index - 1;
			}
			else
			{
				placeFound = true;
			}
		}
		current++;
	}
}