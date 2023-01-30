// Member 1: Sudhan Dahake 
// Member 2: Owen Covach (Team Leader)
// Member 3: Hangsihak Sin
// Group Number: 10
// ---------------------------------------
// PROG71020 - Winter 2023
// Assignment/Lab 02 - January 29/2023
// ---------------------------------------


#include <iostream>
#include <string>

#include "Driver.h"
#include "Location.h"
#include "Truck.h"

int main(void) {

	Location origin(0, 0);
	Truck truck1("Liz", "Brian", 35, 178543, 2, 3);
	Truck truck2("Mike", "Smith", 69, 245871, 5, 2);

	double distanceBetweenTrucks = truck1.distanceFrom(truck2.getTruckLocation());
	double distanceTruck1Origin = truck1.distanceFrom(origin);
	double distanceTruck2Origin = truck2.distanceFrom(origin);

	std::cout << "Distance between the two trucks is: " << distanceBetweenTrucks << std::endl;
	std::cout << "Distance between the truck (with ID = " << truck1.getTruckId() << ") and the origin is: " << distanceTruck1Origin << std::endl;
	std::cout << "Distance between the truck (with ID = " << truck2.getTruckId() << ") and the origin is: " << distanceTruck2Origin << std::endl;

	return 0;

}