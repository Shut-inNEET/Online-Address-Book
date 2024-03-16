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

bool extPersonType::operator==(const extPersonType& rhs) const
{
	string lhsKey = this->getLastName() + " " + this->getFirstName();
	string rhsKey = rhs.getLastName() + " " + rhs.getFirstName();

	return lhsKey == rhsKey;
}

bool extPersonType::operator!=(const extPersonType& rhs) const
{
	return !(*this == rhs);
}

bool extPersonType::operator>=(const extPersonType& rhs) const
{
	string lhsKey = this->getLastName() + " " + this->getFirstName();
	string rhsKey = rhs.getLastName() + " " + rhs.getFirstName();

	return lhsKey >= rhsKey;
}

void extPersonType::setBirthdate(int month, int day, int year) 
{
	birthdate.setDate(month, day, year);
}

void extPersonType::setFullAddress(string adr, string cty, string st, int zip)
{
	address.setAddress(adr);
	address.setCity(cty);
	address.setState(st);
	address.setZipcode(zip);
}