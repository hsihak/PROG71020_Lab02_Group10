// Member 1: Sudhan Dahake 
// Member 2: Owen Covach (Team Leader)
// Member 3: Hangsihak Sin
// Group Number: 10
// ---------------------------------------
// PROG71020 - Winter 2023
// Assignment/Lab 02 - January 29/2023
// ---------------------------------------


#include "Truck.h"									// Header file for Truck Library
#include "Location.h"

#include <iostream>
#include <string>
#include <cmath>


Truck::Truck(Driver DriverInfo, Location LocationInfo, int TruckIdInfo)
{
	driver = DriverInfo;
	location = LocationInfo;
	truckId = TruckIdInfo;
}


void Truck::setTruckId(int Id) {

	truckId = Id;
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
