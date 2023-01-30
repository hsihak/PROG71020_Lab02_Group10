// Member 1: Sudhan Dahake 
// Member 2: Owen Covach (Team Leader)
// Member 3: Hangsihak Sin
// Group Number: 10
// Description: Implementation of Location
// ---------------------------------------
// PROG71020 - Winter 2023
// Assignment/Lab 02 - January 29/2023
// ---------------------------------------


#include "Location.h"

#include <iostream>
#include <string>

// Default Location Constructor

Location::Location()
{
	locationX = 0;
	locationY = 0;
}

Location::Location(int coordinateX, int coordinateY)
{
	locationX = coordinateX;
	locationY = coordinateY;
}

int Location::getLocationX(void) {

	return locationX;
}

int Location::getLocationY(void) {

	return locationY;
}