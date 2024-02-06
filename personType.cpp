#include "personType.h"

void personType::setFirstName(string first)
{
	firstName = first;
}

void personType::setLastName(string last)
{
	lastName = last;
}

void personType::print()
{
	cout << firstName << " " << lastName << endl;
}

personType::personType(string first, string last)
{
	firstName = first;
	lastName = last;
}