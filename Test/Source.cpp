// Member 1: Sudhan Dahake 
// Member 2: Owen Covach (Team Leader)
// Member 3: Hangsihak Sin
// Group Number: 10
// ---------------------------------------
// PROG71020 - Winter 2023
// Assignment/Lab 02 - January 29/2023
// ---------------------------------------


#include <iostream>						// is a header file that contains information to include the input/output related functions in our program
#include <string>						// allows us to deal with strings

#include "Driver.h"						// linking header file for Driver library
#include "Location.h"					// linking header file for Location library
#include "Truck.h"						// linking header file for Truck library

int main(void) {

	Location origin(0, 0);										//  a variable is assigned the class Location which takes two parameters, both int values. These parameters in this case is the coordinate of the origin

	Truck truck1("Liz", "Brian", 35, 178543, 2, 3);				//	a variable named truck1 is assigned the class Truck who requires 6 paramerts.
																// 2 strings and 4 integers. The strings indicate first and last name and the integers indicate - driverId, truckId, and X and Y coordinate of the truck
	Truck truck2("Mike", "Smith", 69, 245871, 5, 2);

	double distanceBetweenTrucks = truck1.distanceFrom(truck2.getTruckLocation());
	// a variable distanceBetweenTrucks of type double is initialised that will store the value of the distance between the two trucks
	// The distanceFrom() Function inside truck1 is called and the getTruckLocation() function inside truck2 is passed as parameter, as it requires truck2's location to find the distance between the trucks																			

	double distanceTruck1Origin = truck1.distanceFrom(origin);
	// this variable will store the distance of truck1 from origin
	// the distanceFrom() function inside truck1 is called and the origin variable of type Location is passed as parameter. This is done because we need coordinates of the origin

	double distanceTruck2Origin = truck2.distanceFrom(origin);
	// this variable will store the distance of truck2 from origin
	// the distanceFrom() function inside truck2 is called and the origin variable of type Location is passed as parameter. This is done because we need coordinates of the origin

	std::cout << "Distance between the two trucks is: " << distanceBetweenTrucks << std::endl;
	// The distance between the two trucks is printed

	std::cout << "Distance between the truck (with ID = " << truck1.getTruckId() << ") and the origin is: " << distanceTruck1Origin << std::endl;
	// The getTruckId() function inside truck1 is called to get it's Id and to print it. Also the distance between truck1 and origin is also printed

	std::cout << "Distance between the truck (with ID = " << truck2.getTruckId() << ") and the origin is: " << distanceTruck2Origin << std::endl;
	// The getTruckId() function inside truck2 is called to get it's Id and to print it. Also the distance between truck2 and origin is also printed

	return 0;				// This indicates successful execution

}