#include <iostream>
#include <string.h>

using namespace std;

class dateType
{
private:
	//List of total days in non-leap year
	static int daysInMonths[12];

	// Int variables to store the current month, day, and year
	int currentMonth;
	int currentDay;
	int currentYear;

public:
	// Set the date
	// Precondition: Inputs are integers
	// Postcondition: The currentMonth, currentDay, and currentYear are set
	void setDate(int, int, int);

	// Get the day
	// Precondition: None
	// Postcondition: Return the currentDay
	int getDay() const
	{
		return currentDay;
	}

	// Get the month
	// Precondition: None
	// Postcondition: Return the currentMonth
	int getMonth() const
	{
		return currentMonth;
	}

	// Get the year
	// Precondition: None
	// Postcondition: Return the currentYear
	int getYear() const
	{
		return currentYear;
	}

	// Identify if the year is a leap year
	// Precondition: currentYear has been intialized
	// Postcondition: Return true if the year is a leap year and false if not
	bool isleapYear() const;

	// Prints the current date
	// Precondition: currentMonth, currentDay, and currentYear have been initialized
	// Postcondition: Prints the currentMonth, currentDay, and currentYear to the console
	void print() const;

	// Default constructor
	// Precondition: Input are integers
	// Postcondition: The dateType object is created with the inputed month, day, and year
	dateType(int = 1, int = 1, int = 1900);
};

