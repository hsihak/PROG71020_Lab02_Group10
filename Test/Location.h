// Member 1: Sudhan Dahake 
// Member 2: Owen Covach (Team Leader)
// Member 3: Hangsihak Sin
// Group Number: 10
// Description: Interface of Location Library
// ---------------------------------------
// PROG71020 - Winter 2023
// Assignment/Lab 02 - January 29/2023
// ---------------------------------------

#pragma once

#include <iostream>					// is a header file that contains information to include the input/output related functions in our program

class Location {					// a class named Location is created

	int locationX;					// This will be used to store the X coordinate of the Location
	int locationY;					// This will be used to store the Y coordinate of the Location
	// These two attributes are private, that is they couldn't be accessed outside of the class

public:								// This makes sure that all the functions under it can be accessed outside of the class

	Location();						// Default Location class constructor

	Location(int, int);				// a second Location class constructor is created which takes two parameters both integers. It has a different signature than our default constructor

	int getLocationX(void);			// a function prototype named getLocationX() is created that takes no parameters and returns an integer. It returns the X coordinate of the Location

	int getLocationY(void);			// a function prototype named getLocationY() is created that takes no parameters and returns an integer. It returns the Y coordinate of the Location
};