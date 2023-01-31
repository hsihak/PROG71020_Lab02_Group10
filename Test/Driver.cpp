// Member 1: Sudhan Dahake 
// Member 2: Owen Covach (Team Leader)
// Member 3: Hangsihak Sin
// Group Number: 10
// Description: Implementation of
// ---------------------------------------
// PROG71020 - Winter 2023
// Assignment/Lab 02 - January 29/2023
// ---------------------------------------

#include "Driver.h"						// linking header file for Driver library

#include <iostream>						// is a header file that contains information to include the input/output related functions in our program
#include <string>						// allows us to deal with strings

// Default Driver Constructor

Driver::Driver()
{
	firstName = EMPTYSTRING;			// both the private strings are intialised and given the value stored in constant EMPTYSTRING
	lastName = EMPTYSTRING;
	driverId = 0;						// the driverId member's value is initialised as 0
}

Driver::Driver(std::string fName, std::string lName, int dId)			// a second constructor is created with a different signature than the default one. It takes 3 parameters 2 strings and 1 integer. The strings are first and last name and the integer is driver Id
{
	firstName = fName;				// The member firstName is assigned the value of fName (which is a parameter)
	lastName = lName;				// The member lastName is assigned the value of lName (which is a parameter)
	driverId = dId;					// The member driverId is assigned the value of dId (which is a parameter)
}

std::string Driver::getFirstName(void) {				// getFirstName() function inside Driver class is initialised. It does not take any parameter but returns a string.

	return firstName;									// returning private members value
}														// this returns the first Name of the Driver

std::string Driver::getLastName(void) {					// getLastName() function inside Driver class is initialised. It does not take any parameter but returns a string.

	return lastName;									// returning private members value
}														// this returns the last Name of the Driver

int Driver::getDriverId(void) {							// getDriverId() function inside Driver class is initialised. It does not take any parameter but returns an integer.

	return driverId;									// returning private members value
														// this returns the id of the driver
}