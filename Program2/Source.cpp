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

	Driver driver1;
	Driver driver2;
	Driver driver3;

	Location origin;

	Location location1;
	Location location2;
	Location location3;

	origin.setLocationX(0);
	origin.setLocationY(0);

	driver1.setFirstName("Liz");
	driver1.setLastName("Brian");
	driver1.setDriverId(35);
	location1.setLocationX(2);
	location1.setLocationY(3);

	driver2.setFirstName("Mike");
	driver2.setLastName("Smith");
	driver2.setDriverId(69);
	location2.setLocationX(5);
	location2.setLocationY(2);

	Truck truck1(driver1, location1, 178543);
	Truck truck2(driver2, location2, 245871);

	double distanceBetweenTrucks = truck1.distanceFrom(truck2.getTruckLocation());
	double distanceTruck1Origin = truck1.distanceFrom(origin);
	double distanceTruck2Origin = truck2.distanceFrom(origin);

	std::cout << "Distance between the two trucks is: " << distanceBetweenTrucks << std::endl;
	std::cout << "Distance between the truck (with ID = " << truck1.getTruckId() << ") and the origin is: " << distanceTruck1Origin << std::endl;
	std::cout << "Distance between the truck (with ID = " << truck2.getTruckId() << ") and the origin is: " << distanceTruck2Origin << std::endl;

	return 0;
}