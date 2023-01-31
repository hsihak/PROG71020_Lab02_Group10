// Member 1: Sudhan Dahake 
// Member 2: Owen Covach (Team Leader)
// Member 3: Hangsihak Sin
// Group Number: 10
// Description: Interface of Driver Libarary
// ---------------------------------------
// PROG71020 - Winter 2023
// Assignment/Lab 02 - January 29/2023
// ---------------------------------------

#pragma once

#include <iostream>							// is a header file that contains information to include the input/output related functions in our program
#include <string>							// allows us to deal with strings

#define MAXSIZE 20							// this constant indicates the maximum size
#define EMPTYSTRING ""						// this constant indicates empty string

class Driver {								// a class named Location is created

	std::string firstName;					// This string will be used to store the first Name of the driver
	std::string lastName;					// This string will be used to store the Last Name of the driver
	int driverId;							// This integer will be used to store the driver's Id

	// The above 3 members are private, that is they couldn't be accessed outside the class

public:						// The below functions are public, that is they can be accessed outside of class

	Driver();									// Default Driver Class constructor

	Driver(std::string, std::string, int);		// a second Driver class constructor is created which takes 3 parameters 2 Strings and 1 integer. It has a different signature than our default constructor

	std::string getFirstName(void);				
	// a function prototype named getFirstName() is created that takes no parameters and returns a string. It returns the first name of the driver

	std::string getLastName(void);
	// a function prototype named getLastName() is created that takes no parameters and returns a string. It returns the last name of the driver

	int getDriverId(void);
	// a function prototype named getDriverId() is created that takes no parameters and returns an integer. It returns the Id of the Driver
};