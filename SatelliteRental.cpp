#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

class Rental {
public:

protected:
};

class Customers: Rental {
public:
    Customers();
protected:
};

class Satellite: Rental {
public:
    Satellite(int productNum): productNum(productNum){
        iSatellite++;
    };
    ~Satellite(){
        iSatellite--;
    };
static int iSatellite;

protected:
int productNum;

};

class Location: Satellite{
public:

protected:

};

int main(){
    string userLocationAnswer = 0;
    int NumOfSatellite = 100, NumOfLocations = 62, NumCustomerUseSatellite;
    vector<string> locations(NumOfLocations);
    vector<int> satelliteNum(NumOfSatellite);

    // Assign each state into the string vector called 'locations'.
    if (ifstream file {"states.txt"})
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