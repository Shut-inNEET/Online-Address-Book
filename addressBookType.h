#include "extPersonType.h"
#include <fstream>
#include <string>

class addressBookType
{
private:
	extPersonType addressList[500];
	int length = 0;
	int maxLength = 1000;

public:
	void initEntry();

	void addEntry(extPersonType);

	void findPerson(string);

	void findBirthday(int);

	void findRelations(string);

	void print();

	void sortEntries();
};