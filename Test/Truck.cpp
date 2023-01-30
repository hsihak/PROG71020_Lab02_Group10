// Member 1: Sudhan Dahake 
// Member 2: Owen Covach (Team Leader)
// Member 3: Hangsihak Sin
// Group Number: 10
// Description: Implementation of Truck Library
// ---------------------------------------
// PROG71020 - Winter 2023
// Assignment/Lab 02 - January 29/2023
// ---------------------------------------


#include "Truck.h"									// Header file for Truck Library
#include "Location.h"
#include "Driver.h"
#include <iostream>
#include <string>
#include <cmath>

// Default Truck Constructor
Truck::Truck()
{
	driver = Driver("Mary", "Jane", 0);
	location = Location(0, 0);
	truckId = 0;
}

Truck::Truck(std::string fName, std::string lName, int driverId, int tId, int coordinateX, int coordinateY)
{
	driver = Driver(fName, lName, driverId);
	location = Location(coordinateX, coordinateY);
	truckId = tId;
}

Location Truck::getTruckLocation()
{
	return location;
}

int Truck::getTruckId()
{
	return truckId;
}

double Truck::distanceFrom(Location location2)
{
	double distance = sqrt(pow(location2.getLocationX() - location.getLocationX(), 2) + pow(location2.getLocationY() - location.getLocationY(), 2));
	return distance;
}



