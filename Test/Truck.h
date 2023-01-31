
// Member 1: Sudhan Dahake 
// Member 2: Owen Covach (Team Leader)
// Member 3: Hangsihak Sin
// Group Number: 10
// Description: Interface of Truck Library
// ---------------------------------------
// PROG71020 - Winter 2023
// Assignment/Lab 02 - January 29/2023
// ---------------------------------------

#pragma once

#include "Driver.h"								// linking header file for Driver library
#include "Location.h"							// linking header file for Location library

#include <iostream>								// is a header file that contains information to include the input/output related functions in our program
#include <string>								// allows us to deal with strings

#define EMPTYSTRING ""							// this constant indicates empty string

class Truck {									// a class named Truck is created

private:
	Driver driver;								// a variable named driver of Driver class is declared
	Location location;							// a variable named location of Location class is declared
	int truckId;								// This integer will be used to store the truck's Id

	// The above 3 members are private, that is they couldn't be accessed outside the class

public:							// The below functions are public, that is they can be accessed outside of class

	Truck();														// Default Truck Class constructor

	Truck(std::string, std::string, int, int, int, int);
	// a second Truck class constructor is created which takes 6 parameters 2 Strings and 4 integers. It has a different signature than our default constructor

	Location getTruckLocation();
	// a function prototype named getTruckLocation() is created that takes no parameters and returns value of type Location. It returns the Location of the Truck

	int getTruckId();
	// a function prototype named getTruckId() is created that takes no parameters and returns an integer. It returns the Id of the Truck

	double distanceFrom(Location);
	// a function prototype named distanceFrom() is created that takes the a Location as a parameter and returns a double value. It returns the distance between the truck and the passed Location
};