#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

class Customers{
public:
    Customers();
protected:
};

class Satellite{
public:

static int iSatellite;

protected:
int productNum;

};

class InfraredSatellite: Satellite {
public:
    InfraredSatellite(int productNum): productNum(productNum){
        iInfraredSatellite++; };

    ~InfraredSatellite(){
        iInfraredSatellite--; };
static int iInfraredSatellite;

protected:
int productNum;
};

class MicrowaveSatellite: Satellite {
public:
    MicrowaveSatellite(int productNum): productNum(productNum){
        iMicrowaveSatellite++; };

    ~MicrowaveSatellite(){
        iMicrowaveSatellite--; };
static int iMicrowaveSatellite;
protected:
int productNum;

};


class Location: MicrowaveSatellite, InfraredSatellite{
public:
    Location(double x, double y): x(x), y(y){
        cout << "The inputted location is x:" << x << ", and y: " << y << "."<< endl;}

protected:
double x;
double y;
};

int main(){
    string userLocationAnswer = 0;
    int NumOfSatellite = 100, NumOfLocations = 62, NumCustomerUseSatellite;
    vector<string> locations(NumOfLocations);
    vector<int> satelliteNum(NumOfSatellite);

    // Assign each state into the string vector called 'locations'.

    ifstream inFile("states.txt", ios::in);

    if (!inFile) {
        cerr << "File could not be opened." << endl;
        exit(1);
    }

    string location;
    while(inFile >> location)
    {
        locations.push_back(location);
    }

    inFile.close();
/*
    if (ifstream file{"states.txt"});
    {
        string location;
        while(file >> location)
        {
            locations.push_back(location);
        }
    }
    else{
        cout << "<< ERROR >>: The program can't read the file for some reason. " << endl;
    }
    */
    for (int count = 0; cout << NumOfSatellite; count++){
        satelliteNum.push_back(count + 5001);
    }
    
    cout << "This program will provide appropriate satellite considering customers' preferences. " << endl;
    cout << "We will need your preference data so that we can provide the available satellites. " << endl;
    cout << "How many satellites do you plan to use? " << endl;
    cin >> NumCustomerUseSatellite;
    cout << "Please provide us with the locations where you need to use satellite. If you are done, please type 'done'." << endl;


    return 0;
}