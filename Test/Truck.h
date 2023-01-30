
// Member 1: Sudhan Dahake 
// Member 2: Owen Covach (Team Leader)
// Member 3: Hangsihak Sin
// Group Number: 10
// ---------------------------------------
// PROG71020 - Winter 2023
// Assignment/Lab 02 - January 29/2023
// ---------------------------------------

#pragma once

#include "Driver.h"
#include "Location.h"

#include <iostream>
#include <string>

class Truck {

private:
	Driver driver;
	Location location;
	int truckId;

public:

	/*Truck(Driver driverInfo, Location locationInfo, int truckIdInfo);*/

	Truck();

	Truck(std::string, std::string, int, int, int, int);

	void setTruckId(int);

	Location getTruckLocation();

	int getTruckId();

	double distanceFrom(Location);
};