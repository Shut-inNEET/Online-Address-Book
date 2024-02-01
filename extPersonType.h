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
};