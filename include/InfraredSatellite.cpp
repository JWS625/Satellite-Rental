#include <iostream>
#include"Satellite.h"
#include"InfraredSatellite.h"

InfraredSatellite::InfraredSatellite() {}
InfraredSatellite::InfraredSatellite(int ){}
//InfraredSatellite::~InfraredSatellite(){}

float InfraredSatellite::getBatteryRemained(){return batteryRemained; }
int InfraredSatellite::getSerialNumber(){return serialNumber;}
void InfraredSatellite::takePicture(){
        std::cout << "The satellite is taking a picture of the location. " << std::endl;
        std::cout << "Loading ...." << std::endl; }
void InfraredSatellite::getLocation(std::string Location) {location = Location; }
