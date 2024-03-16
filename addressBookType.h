#include "extPersonType.h"
#include <fstream>
#include <string>

class addressBookType
{
private:
	extPersonType addressList[500];
	int length = 0;
	int maxLength = 500;

public:
	// Adds entries to addressList from the file
	// Postconditon: addressList has been initialized
	void initEntry();

	// Checks if length has not exceeded the maxLength, adds a new entry to addressList
	// Precondition: addressList has been initialized and has space for more entries
	// Postcondition: updates addressList and length is incremented
	void addEntry(extPersonType);

	// Searches for entries with specified last name in the addressList
	// Precondition: addressList has been initialized
	// Postcondition: entries containing specifications are returned
	void findPerson(string);

	// Searches for entries with specified birth month in the addressList
	// Precondition: addressList has been initialized
	// Postcondition: entries containing specifications are returned
	void findBirthday(int);

	// Searches for entries with specified relation in the addressList
	// Precondition: addressList has been initialized
	// Postcondition: entries containing specifications are returned
	void findRelations(string);

	// Prints all entries in the addressList
	// Precondition: addressList has been initialized
	// Postcondition: all entries in the addressList are printed
	void print();

	// Sorts entries in addressList by lastName
	// Precondition: addressList has been initialized
	// Postcondition: updates the location of each entry
	void sortEntries();
};