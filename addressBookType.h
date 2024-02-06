#include "extPersonType.h"
#include <fstream>

class addressBookType
{
private:
	extPersonType addressList[500];
	int length;
	int maxLength;

public:
	void initEntry(string);

	void addEntry(extPersonType);

	void findPerson(string);

	void findBirthday(int);

	void findRelations(string);

	void print();

	void sortEntries();
};