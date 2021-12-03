// Import Libraries
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

// Import classes
#include "include/Customers.h"
#include "include/Satellite.h"
#include "include/InfraredSatellite.h"
#include "include/MicrowaveSatellite.h"

using namespace std;

int main(){
    string userLocationAnswer = 0;
    string answer;
    int numOfInfraredSatellites = 100, numOfMicrowaveSatellites = 50, numOfLocations = 62, NumCustomerUseSatellite;
    vector<string> locations;
    vector<int> infrared_seiralNum(numOfInfraredSatellites);
    vector<int> microwave_seiralNum(numOfMicrowaveSatellites);

    // Assign each state into the string vector called 'locations'.

    ifstream inFile("states.txt", ios::in);
    int i = 0;
    if (inFile.is_open()) {
        while(getline(inFile, locations[i])){
            i++;}
    }
    else
        cout << "The file could not be opened. " << endl;

    string location;
    while(inFile >> location)
    {locations.push_back(location);}

    inFile.close();

    /*  Serial number of infrared satellites starts from 5000 
        while serial number of microwave satllites strats from 6000. */

    vector<InfraredSatellite> infrared_satellites_vector;
    vector<MicrowaveSatellite> microwave_satellites_vector;
    //for (int infraredNum = 0; infraredNum < numOfInfraredSatellites; ++infraredNum){
        //InfraredSatellite infraredSatellite(infrared_serailNum[infraredNum]);
        //infrared_satellites_vector.push_back(infraredSatellite);
    //}

    for (int microNum = 0; microNum < numOfInfraredSatellites; ++microNum){
        MicrowaveSatellite microwaveSatellite;
        microwave_satellites_vector.push_back(microwaveSatellite);
    }

    // The Program Asks Users Specific Questions From Here.
    do {
    cout << "This program will provide appropriate satellite considering customers' preferences. " << endl;
    cout << "We will need your preference data so that we can provide the available satellites. " << endl;
    cout << "How many satellites do you plan to use? " << endl;
    cin >> NumCustomerUseSatellite;
    cout << "Please provide us with the locations where you need to use the satellites. If you are done, please type 'done'." << endl;
    
    cout << "Please enter 'done' if there is no other customer. " << endl;
    cin >> answer;

    } while(answer != "done" && answer != "Done");
    return 0;
}