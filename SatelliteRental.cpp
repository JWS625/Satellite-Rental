// Import Libraries
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

// Import classe
#include "include/Customers.h"
#include "include/Satellite.h"
#include "include/InfraredSatellite.h"
#include "include/MicrowaveSatellite.h"

using namespace std;

//Customer functions
void fillCustomerInfo(vector<Customers>& );
void fillMicrowaveSatelliteInfo(vector<MicrowaveSatellite>&, int&);
void fillInfraredSatelliteInfo(vector<InfraredSatellite>&, int&);

int main(){

    string answer;
    int numOfInfraredSatellites = 100, numOfMicrowaveSatellites = 50, numOfLocations = 62, NumCustomerUseSatellite;
    vector<string> locations;
    vector<int> infrared_seiralNum(numOfInfraredSatellites);
    vector<int> microwave_seiralNum(numOfMicrowaveSatellites);

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

    vector<string>::iterator iter;
    for (iter = locations.begin(); iter != locations.end(); iter++){
        cout << (*iter) << endl;
    }

    /*  Serial number of infrared satellites starts from 5000 
        while serial number of microwave satllites strats from 6000. */

    vector<InfraredSatellite> infrared_satellites_vector(numOfInfraredSatellites);
    vector<MicrowaveSatellite> microwave_satellites_vector(numOfMicrowaveSatellites);

    fillMicrowaveSatelliteInfo(microwave_satellites_vector);
    fillInfraredSatelliteInfo(infrared_satellites_vector);

    // for (int infraredNum = 0; infraredNum < numOfInfraredSatellites; ++infraredNum){
    //     InfraredSatellite infraredSatellite(infrared_serailNum[infraredNum]);
    //     infrared_satellites_vector.push_back(infraredSatellite);
    // }

    // for (int microNum = 0; microNum < numOfInfraredSatellites; ++microNum){
    //     MicrowaveSatellite microwaveSatellite;
    //     microwave_satellites_vector.push_back(microwaveSatellite);
    // }

    // The Program Asks Users Specific Questions From Here.
    // do {
    // cout << "This program will provide appropriate satellite considering customers' preferences. " << endl;
    // cout << "We will need your preference data so that we can provide the available satellites. " << endl;
    // cout << "How many satellites do you plan to use? " << endl;
    // cin >> NumCustomerUseSatellite;
    // cout << "Please provide us with the locations where you need to use the satellites. If you are done, please type 'done'." << endl;
    
    // cout << "Please enter 'done' if there is no other customer. " << endl;
    // cin >> answer;

    // } while(answer != "done" && answer != "Done");
    return 0;
}

void fillCustomerInfo(vector<Customers>& customer) {

    string name;
    int phoneNum;
    
    cout << "Hi This is Satellite Rental System (S.R.S). " << endl;
    cout << "Please provide your name. " << endl;
    cin >> name;

    cout << "Please provide your phone number. " << endl;
    cin >> phoneNum;
}

void fillMicrowaveSatelliteInfo(vector<MicrowaveSatellite>& microwave, int& serialNum){
    
    
}

void fillInfraredSatelliteInfo(vector<InfraredSatellite>& infrared, int& serialNum){


}