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
	inFile.close();
}

void addressBookType::addEntry(extPersonType newEntry)
{	
	insert(newEntry);
}

void addressBookType::print()
{
	nodeType<extPersonType>* current = first;

	while (current != nullptr) 
	{
		current->info.print();
		current = current->link;
		cout << endl;
	}
}

void addressBookType::findPerson(string search)
{
	nodeType<extPersonType>* current = first;

	while (current != nullptr) 
	{
		if (current->info.getLastName() == search) 
		{
			current->info.print();
			cout << endl; 
		}
		current = current->link;
	}
}

void addressBookType::findBirthday(int search)
{
	nodeType<extPersonType>* current = first;

	while (current != nullptr) 
	{
		if (current->info.getBirthMonth() == search) 
		{
			current->info.print();
			cout << endl;
		}
		current = current->link;
	}
}

void addressBookType::findRelations(string search)
{
	nodeType<extPersonType>* current = first;

	while (current != nullptr)
	{
		if (current->info.getRelationship() == search)
		{
			current->info.print();
			cout << endl;
		}
		current = current->link;
	}
}

void addressBookType::getNewEntryInfo(extPersonType& newEntry)
{
	string firstName, lastName;
	int month, day, year;
	string adr, cty, st;
	int zip;
	addressType address;
	string phone, relation;

	cout << "Enter first name: ";
	cin >> firstName;
	newEntry.setFirstName(firstName);

	cout << "Enter last name: ";
	cin >> lastName;
	newEntry.setLastName(lastName);

	cout << "Enter birth month: ";
	cin >> month;
	cout << "Enter birth day: ";
	cin >> day;
	cout << "Enter birth year: ";
	cin >> year;
	newEntry.setBirthdate(month, day, year);
	
	cout << "Enter address: ";
	cin.clear();
	cin.ignore(); 
	getline(cin, adr);
	cout << "Enter city: ";
	cin.clear();
	getline(cin, cty);
	cout << "Enter state abbreviation: ";
	cin >> st;
	cout << "Enter zipcode: ";
	cin >> zip;
	newEntry.setFullAddress(adr, cty, st, zip);

	cout << "Enter phone number: ";
	cin >> phone;
	newEntry.setPhoneNumber(phone);

	cout << "Enter relationship: ";
	cin >> relation;
	newEntry.setRelationship(relation);

	addEntry(newEntry);
	cout << "Entry added!\n" << endl;	
}

void addressBookType::removeEntry(extPersonType deleteEntry)
{
	string firstName, lastName;

	cout << "Enter the first and last name of the entry you would like to delete: ";
	cin >> firstName >> lastName;
	deleteEntry.setFirstName(firstName);
	deleteEntry.setLastName(lastName);

	bool found = false;
	nodeType<extPersonType>* current = first;

	while (current != nullptr) 
	{
		if (current->info == deleteEntry) 
		{
			found = true;
			deleteNode(current->info);  
			cout << "Removed entry for " << firstName << " " << lastName << "\n" << endl;
			break;
		}
		current = current->link;
	}

	if (!found) 
	{
		cout << "Error - could not find entry for " << firstName << " " << lastName << "\n" << endl;
	}
}

void addressBookType::saveAddressBook()
{
	ofstream outFile;
	nodeType<extPersonType>* current = first;

	outFile.open("AddressBookData.txt");
	while (current != nullptr)
	{
		outFile << current->info.getFirstName() << " " << current->info.getLastName() << endl;
		outFile << current->info.getBirthMonth() << " " << current->info.getBirthDay() << " " << current->info.getBirthYear() << endl;
		outFile << current->info.getAddress() << endl; 
		outFile << current->info.getCity() << endl; 
		outFile << current->info.getState() << endl; 
		outFile << current->info.getZipcode() << endl; 
		outFile << current->info.getPhoneNumber() << endl; 
		outFile << current->info.getRelationship() << endl;
		current = current->link;
		cout << endl;
	}
	outFile.close();
}