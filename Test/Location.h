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

class Location {

	int locationX;
	int locationY;

public:

	Location();

	Location(int, int);

	void setLocationX(int);

	void setLocationY(int);

	int getLocationX(void);

	int getLocationY(void);
};