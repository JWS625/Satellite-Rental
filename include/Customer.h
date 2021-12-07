#pragma once
#include <string>
using namespace std;

#ifndef CUSTOMER_H_
#define CUSTOMER_H_

class Customer
{
public:
	//Constructor
	Customer();

	//Class variables
	string name;
	string email;
	int phone;
	float maxPrice;
	int minResolution;
	string location;

	//Member functions
	string getName();
	string getEmail();
	int getPhone();
	float getMaxPrice();
	int getMinResolution();
	string getLocation();
	void setName(string inName);
	void setEmail(string inEmail);
	void setPhone(int inPhone);
	void setMaxPrice(float inPrice);
	void setMinResolution(int inResolution);
	void setLocation(string inLocation);
private:

};

#endif