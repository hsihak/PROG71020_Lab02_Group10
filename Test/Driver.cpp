// Member 1: Sudhan Dahake 
// Member 2: Owen Covach (Team Leader)
// Member 3: Hangsihak Sin
// Group Number: 10
// Description: Implementation of
// ---------------------------------------
// PROG71020 - Winter 2023
// Assignment/Lab 02 - January 29/2023
// ---------------------------------------

#include "Driver.h"

#include <iostream>
#include <string>

// Default Driver Constructor
Driver::Driver()
{
	firstName = "<no data>";
	lastName = "<no data>";
	driverId = 0;
}

Driver::Driver(std::string fName, std::string lName, int dId)
{
	firstName = fName;
	lastName = lName;
	driverId = dId;
}

std::string Driver::getFirstName(void) {

	return firstName;
}

std::string Driver::getLastName(void) {

	return lastName;
}

int Driver::getDriverId(void) {

	return driverId;
}