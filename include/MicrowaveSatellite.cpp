#include <iostream>
#include <string>
#include "Satellite.h"
#include "MicrowaveSatellite.h"

MicrowaveSatellite::MicrowaveSatellite(){}
MicrowaveSatellite::MicrowaveSatellite(int n): serialNumber(n){}
//MicrowaveSatellite::~MicrowaveSatellite(){}

int MicrowaveSatellite::getSerialNumber(){return serialNumber;}
float MicrowaveSatellite::getBatteryRemained(){return batteryRemained;}
void MicrowaveSatellite::takePicture(){
        std::cout << "The satellite is taking a picture of the location. " << std::endl;
        std::cout << "Loading ...." << std::endl; }
void MicrowaveSatellite::getLocation(std::string Location){location = Location;}
