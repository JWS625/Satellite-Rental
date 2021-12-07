#include "Customer.h"
#include <iostream>
using namespace std;

Customer::Customer()
{
	//Initialize Customer variables
	name;
	email;
	phone = 0;
	maxPrice = 0;
	minResolution = 0;
	location;
}

//Define getter functions
string Customer::getName() { return name; }
string Customer::getEmail() { return email; }
int Customer::getPhone() { return phone; }
float Customer::getMaxPrice() { return maxPrice; }
int Customer::getMinResolution() { return minResolution; }
string Customer::getLocation() { return location; }

//Define setter functions
void Customer::setName(string inName) { name = inName; }
void Customer::setEmail(string inEmail) { email = inEmail; }
void Customer::setPhone(int inPhone) { phone = inPhone; }
void Customer::setMaxPrice(float inPrice) { maxPrice = inPrice; }
void Customer::setMinResolution(int inResolution) { minResolution = inResolution; }
void Customer::setLocation(string inLocation) { location = inLocation; }