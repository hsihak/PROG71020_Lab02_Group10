// Member 1: Sudhan Dahake 
// Member 2: Owen Covach (Team Leader)
// Member 3: Hangsihak Sin
// Group Number: 10
// ---------------------------------------
// PROG71020 - Winter 2023
// Assignment/Lab 02 - January 29/2023
// ---------------------------------------

#pragma once

#include <iostream>
#include <string>

#define MAXSIZE 20

class Driver {

	std::string firstName;
	std::string lastName;
	int driverId;

public:

	Driver();

	Driver(std::string, std::string, int);

	void setFirstName(std::string);

	void setLastName(std::string);

	void setDriverId(int);

	std::string getFirstName(void);

	std::string getLastName(void);

	int getDriverId(void);
};