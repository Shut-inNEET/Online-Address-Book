#include "addressType.h"
#include "dateType.h"
#include "personType.h"


class extPersonType : public personType
{
private:
	addressType address;
	dateType birthdate;
	string phoneNumber;
	string relationship;

public:
	// Sets phonenumber.
	// Precondition: A valid string is passed as an argument.
	// Postcondition: The phoneNumber attribute is set to the provided string.
	void setPhoneNumber(string);

	// Set relationship.
	// Precondition: A valid string is passed as an argument.
	// Postcondition: The relationship attribute is set to the provided string.
	void setRelationship(string);

	// Retrieves phonenumber.
	// Postcondition: Returns the current value of the phoneNumber attribute.
	string getPhoneNumber()
	{
		return phoneNumber;
	}

	// Retreives relationship.
	// Postcondition: Returns the current value of the relationship attribute.
	string getRelationship()
	{
		return relationship;
	}

	// Retrieves birth month.
	// Postcondition: Returns the birth month from the birthdate object.
	int getBirthMonth()
	{
		return birthdate.getMonth();
	}

	// Prints extended person information. 
	// Postcondition: Outputs name, birthdate, address, phone number, and relationship.
	void print();

	// Default constructor: extPersonType
	// Postcondition: Initializes the instance variables from the base class personType as well as its instance object variables address and birthdate with the given values; otherwise, initializes them with default values.
	extPersonType(string = "", string = "", int = 1, int = 1, int = 1900, string = "", string = "", string = "XX", int = 10000, string = "None", string = "None");

	// Operator overload that creates keys by concatenating object's last name and first name
	// Preconditions: this extPersonType object and rhs (right-hand-side) are valid extPersonType objects
	// Postconditions: Returns true if this object and rhs represent the same person based on name
	bool operator==(const extPersonType&) const;

	// Operator overload that compares two objects
	// Preconditions: this extPersonType object and rhs (right-hand-side) are valid extPersonType objects
	// Postconditions: Returns true if this object and rhs do NOT represent the same person
	bool operator!=(const extPersonType&) const;

	// Operator overload that creates keys by concatenating object's last name and first name
	// Preconditions: this extPersonType object and rhs (right-hand-side) are valid extPersonType objects
	// Postconditions: Returns true if this person's name is greater than or equal to rhs's name
	bool operator>=(const extPersonType&) const;
	
	// Sets birthdate
	// Precondition: Day, month, and year are valid
	// Postcondition: Birthdate is set to given parameters
	void setBirthdate(int, int, int);

	// Sets the entire address
	// Precondition: Address, city, state, and zipcode are valid
	// Postcondition: Full address is set to given parameters
	void setFullAddress(string, string, string, int);

	// Retrieves birth day.
	// Postcondition: Returns the birth day from the birthdate object.
	int getBirthDay()
	{
		return birthdate.getDay();
	}

	// Retrieves birth year.
	// Postcondition: Returns the birth year from the birthdate object.
	int getBirthYear()
	{
		return birthdate.getYear();
	}

	// Retrieves address.
	// Postcondition: Returns the address from the address object.
	string getAddress()
	{
		return address.getAddress(); 
	}

	// Retrieves city.
	// Postcondition: Returns the city from the address object.
	string getCity()
	{
		return address.getCity();
	}

	// Retrieves state.
	// Postcondition: Returns the state from the address object.
	string getState()
	{
		return address.getState();
	}

	// Retrieves zipcode.
	// Postcondition: Returns the zipcode from the address object.
	int getZipcode()
	{
		return address.getZipcode();
	}
};