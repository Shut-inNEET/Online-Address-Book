#include <iostream>
#include <string.h>

using namespace std;

class personType
{
private:
	string firstName;
	string lastName;

public:
	// Sets first name.
	// Precondition: A valid string is passed as an argument.
	// Postcondition: The firstName attribute is set to the provided string.
	void setFirstName(string);
	
	// Sets last name.
	// Precondition: A valid string is passed as an argument.
	// Postcondition: The lastName attribute is set to the provided string.
	void setLastName(string);

	// Retrieves first name.
	// Postcondition: Returns the current value of the firstName attribute.
	string getFirstName()
	{
		return firstName;
	}

	// Retrieves last name.
	// Postcondition: Returns the current value of the lastName attribute.
	string getLastName()
	{
		return lastName;
	}
	
	// Prints Person fields.
	// Postcondition: Prints first name & last name.
	void print();

	// Default constructor: personType
	// Postcondition: If provided, initializes the firstName and lastName attributes with the given values; otherwise, initializes them with empty strings.
	personType(string = "", string = "");
};