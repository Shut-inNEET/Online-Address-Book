#include <iostream>
#include <string.h>

using namespace std;

class addressType
{
private:
	string address;
	string city;
	string state;
	int zipcode;

public:
	// Sets the address string
	// Precondition: adr is a valid address string
	// Postcondition: address field set to adr
	void setAddress(string adr)
	{
		address = adr;
	}

	// Sets the city name
	// Precondition: ct is a valid city name string 
	// Postcondition: city field set to ct
	void setCity(string ct)
	{
		city = ct;
	}

	// Sets the state abbreviation 
	// Precondition: st is a valid 2 letter state abbreviation
	// Postcondition: state field set to st
	void setState(string st)
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

	// Sets the zipcode 
	// Precondition: zip is an integer between 11111-99999
	// Postcondition: zipcode field set to zip
	void setZipcode(int zip)
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

	// Returns address string
	// Postcondition: Returns value of address field
	string getAddress() const
	{
		return address;
	}

	// Returns city string 
	// Postcondition: Returns value of city field
	string getCity() const
	{
		return city;
	}

	// Returns state string
	// Postcondition: Returns value of state field
	string getState() const
	{
		return state;
	}

	// Returns zipcode int
	// Postcondition: Returns value of zipcode field
	int getZipcode() const
	{
		return zipcode;
	}

	// Prints address fields  
	// Postcondition: Prints address, city, state, zipcode
	void print() const
	{
		cout << address << endl;
		cout << city << " " << state << ", " << zipcode << endl;
	}

	// Default constructor
	addressType()
	{
		address = "";
		city = "";
		state = "XX";
		zipcode = 10000;
	}

	// Constructor with parameters
	addressType(string adr, string ct, string st, int zip)
	{
		address = adr;
		city = ct;

		setState(st);
		setZipcode(zip);
	}
};