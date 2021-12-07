// Import Libraries
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

// Import Classe
#include "include/Customer.h"
#include "include/Customer.cpp"
#include "include/Satellite.h"
#include "include/InfraredSatellite.h"
#include "include/InfraredSatellite.cpp"
#include "include/MicrowaveSatellite.h"
#include "include/MicrowaveSatellite.cpp"

using namespace std;

// Customer Interface Function
Customer* requestInputs();

int main(){

    string answer;
    int numOfInfraredSatellites = 100, numOfMicrowaveSatellites = 50, numOfLocations = 62, NumCustomerUseSatellite;
    vector<string> locations;
    // Customer* NewCustomer =

    int infrared_serialNum[numOfInfraredSatellites];
    int microwave_seiralNum[numOfMicrowaveSatellites];

    vector<InfraredSatellite> infrared_satellites_vector(numOfInfraredSatellites);
    vector<MicrowaveSatellite> microwave_satellites_vector(numOfMicrowaveSatellites);

    // Assign each state into the string vector called 'locations'.
    fstream myFile;
    myFile.open("states.txt", ios::in);

    // ifstream inFile("states.txt", ios::in);
    if (myFile.is_open()){
        string locationdata;
        while (getline(myFile, locationdata)){
            locationdata.erase(remove(locationdata.begin(), locationdata.end(), '\''),
            locationdata.end());
            locationdata.erase(remove(locationdata.begin(), locationdata.end(), ','),
            locationdata.end());
            locations.push_back(locationdata);
        }
    }
    else {
        cerr << "File could not be opened. " << endl;
        exit(1);
    }

    // vector<string>::iterator iter;
    // for (iter = locations.begin(); iter != locations.end(); iter++){
    //     cout << (*iter) << endl;
    // }

    for (int i = 0; i < numOfInfraredSatellites; ++i){
        infrared_serialNum[i] = 5000 + i;}
    for (int i = 0; i < numOfMicrowaveSatellites; ++i) {
        microwave_seiralNum[i] = 6000 + i;}
    /*  Serial number of infrared satellites starts from 5000 
        while serial number of microwave satllites strats from 6000. */

    for (int infraredNum = 0; infraredNum < numOfInfraredSatellites; ++infraredNum){
        InfraredSatellite infraredSatellite(infrared_serialNum[infraredNum]);
        //infraredSatellite.getLocation();
        infrared_satellites_vector.push_back(infraredSatellite);
        
        }
    for (int microNum = 0; microNum < numOfInfraredSatellites; ++microNum){
        MicrowaveSatellite microwaveSatellite(microwave_seiralNum[microNum]);
        microwave_satellites_vector.push_back(microwaveSatellite);}


    //Customer Interface Starts Here.
    Customer* NewCustomer = requestInputs();
    return 0;
}


Customer* requestInputs()
{
	//Create new Customer object
	Customer* NewCustomer = new Customer;
    string stringName;
    string stringEmail;
	//Welcome new customer
	cout << "\nWelcome to Satellite Rental" << endl;

	//Request customer name
	cout << "Please input your name: ";
	cin >> stringName;

	//Iterate through name to make sure it only contains letters
	int i = 0;
	while (i < stringName.size())
	{
		if (int(stringName[i]) > 64 | int(stringName[i]) > 122 | int(stringName[i]) < 97 | int(stringName[i]) > 90)
		{
			//Check for spaces in name
			if (int(stringName[i]) != 32)
			{
				cout << "Must input a real name" << endl;
				requestInputs();
			}
		}
	}

	//Request customer email
	cout << "Please input your email: ";
	cin >> stringEmail;

	//Iterate input email to verify validity
	int j = 0;
	while (j < stringEmail.size())
	{
		if (stringEmail[j] == '@') { break; }

		//Request again if there is no @ character
		if (i == stringEmail.size() - 1)
		{
			cout << "Input a valid email address" << endl;
			requestInputs();
		}
	}
	NewCustomer->setEmail(stringEmail);

	return NewCustomer;
}