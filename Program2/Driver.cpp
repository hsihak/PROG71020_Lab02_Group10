// Member 1: Sudhan Dahake 
// Member 2: Owen Covach (Team Leader)
// Member 3: Hangsihak Sin
// Group Number: 10
// ---------------------------------------
// PROG71020 - Winter 2023
// Assignment/Lab 02 - January 29/2023
// ---------------------------------------

#include "Driver.h"

#include <iostream>
#include <string>

void Driver::setFirstName(std::string fName) {

	firstName = fName;
}

void Driver::setLastName(std::string lName) {

	lastName = lName;
}

void Driver::setDriverId(int Id) {

	driverId = Id;
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