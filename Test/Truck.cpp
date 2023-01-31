// Member 1: Sudhan Dahake 
// Member 2: Owen Covach (Team Leader)
// Member 3: Hangsihak Sin
// Group Number: 10
// Description: Implementation of Truck Library
// ---------------------------------------
// PROG71020 - Winter 2023
// Assignment/Lab 02 - January 29/2023
// ---------------------------------------


#include "Truck.h"									// linking header file for Truck library
#include "Location.h"								// linking header file for Location library
#include "Driver.h"									// linking header file for Driver library

#include <iostream>									// is a header file that contains information to include the input/output related functions in our program
#include <string>									// allows us to deal with strings
#include <cmath>									// allows us to use math functions

// Default Truck Constructor
Truck::Truck()
{
	driver = Driver(EMPTYSTRING, EMPTYSTRING, 0);				
	// the driver member is initialised here. The Driver class constuctor is called and the strings are set to EMPTYSTRING and the driver Id is set to 0.

	location = Location(0, 0);
	// the Location member is initialised here. The Location class constuctor is called and the coordinates passed are set to 0

	truckId = 0;			// the truckId is set to 0
}

Truck::Truck(std::string fName, std::string lName, int driverId, int tId, int coordinateX, int coordinateY)
{	// a second constructor is created with a different signature than the default one. It takes 6 parameters 2 strings and 4 integers. The strings are first and last name and the integers are driver Id, truck Id, X Coordinate and Y coordinate of the truck

	driver = Driver(fName, lName, driverId);				// The Driver class constructor is called and the first, last name and the driver Id is passed as parameters
															// The values are then assigned to the driver member

	location = Location(coordinateX, coordinateY);			// The Location class constructor is called and the X and Y coordinate of the Truck is passed as parameters
															// The values are then assigned to the location member

	truckId = tId;											// the truckId member is assigned the value of the tId
}

Location Truck::getTruckLocation()					// getTruckLocation() function inside Truck class is initialised. It does not take any parameter but returns the values of class Location.
{
	return location;								// returning private members value
}													// this returns the location of the truck

int Truck::getTruckId()								// getTruckId() function inside Truck class is initialised. It does not take any parameter but returns an integer.
{
	return truckId;									// returning private members value
}													// this returns the truckId of the truck

double Truck::distanceFrom(Location location2)		// distanceFrom() function inside Truck class is initialised. It takes the 2nd Location (either of truck or of Origin) as a parameter. It returns a double value.
{
	double distance = sqrt(pow(location2.getLocationX() - location.getLocationX(), 2) + pow(location2.getLocationY() - location.getLocationY(), 2));
	// Here to calculate distance the following formula is used:
	// (((x2 - x1) ^ 2) + ((y2 - y1) ^ 2)) ^ (1 / 2)
	
	// pow function is used for exponent i.e. to raise to the power. In this case we are raising it to the power of 2
	// sqrt function is used to get the square root of the expression passed. 
	// Both these functions return a double type value. Therefore distance is of type double

	return distance;								// returning the value stored in distance variable
}



