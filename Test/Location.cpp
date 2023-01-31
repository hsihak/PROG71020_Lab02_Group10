// Member 1: Sudhan Dahake 
// Member 2: Owen Covach (Team Leader)
// Member 3: Hangsihak Sin
// Group Number: 10
// Description: Implementation of Location
// ---------------------------------------
// PROG71020 - Winter 2023
// Assignment/Lab 02 - January 29/2023
// ---------------------------------------


#include "Location.h"					// linking header file for Location library

#include <iostream>						// is a header file that contains information to include the input/output related functions in our program
#include <string>						// allows us to deal with strings

// Default Location Constructor

Location::Location()					// This is the default constructor created
{
	locationX = 0;						// Both the attributes are set to 0
	locationY = 0;
}

// Locaion:: is done to tell that we are accessing the functions inside Location class

Location::Location(int coordinateX, int coordinateY)		// a second constructor is created with a different signature than the default one. It takes two parameters both integers and coordinate X and Y
{
	locationX = coordinateX;								// The member locationX is assigned the value of coordinatX
	locationY = coordinateY;								// The member locationY is assigned the value of coordinatY
}

int Location::getLocationX(void) {							// getLocationX() function inside Location class is initialised. It does not take any parameter but returns an Integer.

	return locationX;										// returning the private members value
															// this returns X coordinate
}

int Location::getLocationY(void) {							// getLocationY() function inside Location class is initialised. It does not take any parameter but returns an Integer.

	return locationY;										// returning the private members value
}															// this returns Y coordinate