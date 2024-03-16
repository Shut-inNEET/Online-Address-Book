#include "extPersonType.h"

void extPersonType::setPhoneNumber(string num)
{
	phoneNumber = num;
}

void extPersonType::setRelationship(string status)
{
	if (status == "Family" || status == "Friend" || status == "Business")
	{
		relationship = status;
	}
	else
	{
		relationship = "None";
	}
}

void extPersonType::print()
{
	personType::print();
	birthdate.print();
	address.print();
	cout << phoneNumber << endl;
	cout << relationship << endl;
}

extPersonType::extPersonType(string first, string last, int day, int month, int year, string adr, string city, string state, int zip, string phone, string status) : personType(first, last), birthdate(day, month, year), address(adr, city, state, zip)
{
	phoneNumber = phone;
	relationship = status;
}