#include "addressType.h"

// Definitions
void addressType::setAddress(string adr)
{
	address = adr;
}

void addressType::setCity(string ct)
{
	city = ct;
}

void addressType::setState(string st)
{
	if (st.length() == 2)
	{
		state = st;
	}
	else
	{
		state = "XX";
	}
}

void addressType::setZipcode(int zip)
{
	if (zip > 11111 && zip < 99999)
	{
		zipcode = zip;
	}
	else
	{
		zipcode = 10000;
	}
}

void addressType::print() const
{
	cout << address << endl;
	cout << city << " " << state << ", " << zipcode << endl;
}

addressType::addressType()
{
	address = "";
	city = "";
	state = "XX";
	zipcode = 10000;
}

addressType::addressType(string adr, string ct, string st, int zip)
{
	address = adr;
	city = ct;

	setState(st);
	setZipcode(zip);
}