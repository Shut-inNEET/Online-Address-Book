#include "extPersonType.h"
#include "orderedLinkedList.h"
#include <fstream>
#include <string>

class addressBookType :public orderedLinkedList<extPersonType> 
{
public:
	// Adds entries to orderedLinkedList from the file
	// Postconditon: list in the form of a node structure has been initialized
	void initEntry();

	// Adds a new entry to addressBookType list
	// Precondition: extPersonType object is valid
	// Postcondition: updates addressBookType list
	void addEntry(extPersonType);

	// Searches for entries with specified last name in the addressBookType list
	// Precondition: addressBookType list has been initialized
	// Postcondition: entries containing specifications are returned
	void findPerson(string);

	// Searches for entries with specified birth month in the addressBookType list
	// Precondition: addressBookType list has been initialized
	// Postcondition: entries containing specifications are returned
	void findBirthday(int);

	// Searches for entries with specified relation in the addressBookType list
	// Precondition: addressBookType list has been initialized
	// Postcondition: entries containing specifications are returned
	void findRelations(string);

	// Prints all entries in the addressBookType list
	// Precondition: addressBookType list has been initialized
	// Postcondition: all entries in the addressBookType list are printed
	void print();

	// Retrieves new entry information from user
	// Postcondition: newEntry object contains data entered by user
	void getNewEntryInfo(extPersonType& newEntry);

	// Removes an entry 
	// Precondition: deleteEntry object matches an entry in the list
	// Postcondition: Entry matching deleteEntry is removed
	void removeEntry(extPersonType deleteEntry);

	// Saves entries to AddressBookData.txt 
	// Precondition: addressBookType list exists and outputFile string contains valid file path 
	// Postcondition: Contents of address book written to outputFile and contains updated data from addressBookType list
	void saveAddressBook();
};