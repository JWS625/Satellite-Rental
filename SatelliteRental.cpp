#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

/* Customer Class:
This class is supposed to have user's information that has to do with Satellite's property.
*/
class Customers{
public:
    Customers();
protected:
};

/* Satellite Class:
Satellite class is pure virtual class which is the base class of InfraredSatellite and Microwave Satellite. 
This class contains all the general properties of satellites. 
*/
class Satellite{
public:
virtual int getSerialNumber() = 0;
virtual float getBatteryRemained() = 0;
virtual void takePicture() = 0;
int serialNum;
float batteryRemained;

};

/* Infrared Satellite class:

*/
class InfraredSatellite: Satellite {
public:
    InfraredSatellite() {iInfraredSatellite ++;}

    InfraredSatellite(int n): serialNumber(n){
        iInfraredSatellite++; }

    ~InfraredSatellite(){
        iInfraredSatellite--; }
    
    int getSerialNumber() {return serialNumber;}
    float getBatteryRemained() {return batteryRemained; }

    void takePicture(){
        cout << "The satellite is taking a picture of the location. " << endl;
        cout << "Loading ...." << endl;
    }
static int iInfraredSatellite;

protected:
int serialNumber;
float batteryRemained;
};

/* Microwave Satellite class:

*/
class MicrowaveSatellite: Satellite {
public:
    MicrowaveSatellite();

    MicrowaveSatellite(int n): serialNumber(n){
        iMicrowaveSatellite++; };

    ~MicrowaveSatellite(){
        iMicrowaveSatellite--; };
    void takePicture(){
        cout << "The satellite is taking a picture of the location. " << endl;
        cout << "Loading ...." << endl;
    }
    int getSerialNumber() {return serialNumber;};
    float getBatteryRemained() {return batteryRemained;};
static int iMicrowaveSatellite;

protected:
int serialNumber;
float batteryRemained;

};

/* Location class:

*/
class Location: MicrowaveSatellite, InfraredSatellite{
public:
    Location();

    Location(double x, double y): x(x), y(y){
        cout << "The inputted location is x:" << x << ", and y: " << y << "."<< endl;}

protected:
double x;
double y;
};

int main(){
    string userLocationAnswer = 0;
    string answer;
    int numOfInfraredSatellites = 100, numOfMicrowaveSatellites = 50, numOfLocations = 62, NumCustomerUseSatellite;
    vector<string> locations(numOfLocations);
    vector<int> infrared_seiralNum(numOfInfraredSatellites);
    vector<int> microwave_seiralNum(numOfMicrowaveSatellites);

    // Assign each state into the string vector called 'locations'.

    ifstream inFile("states.txt", ios::in);

    if (!inFile) {
        cerr << "File could not be opened." << endl;
        exit(1);
    }

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