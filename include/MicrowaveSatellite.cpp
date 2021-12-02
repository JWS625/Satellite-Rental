#include <iostream>
#include "MicrowaveSatellite.h"

MicrowaveSatellite::MicrowaveSatellite(){iMicrowaveSatellite++;}
MicrowaveSatellite::MicrowaveSatellite(int n): serialNumber(n){iMicrowaveSatellite++;}
MicrowaveSatellite::~MicrowaveSatellite(){iMicrowaveSatellite--;}

int MicrowaveSatellite::getSerialNumber(){return serialNumber;}
float MicrowaveSatellite::getBatteryRemained(){return batteryRemained;}

void MicrowaveSatellite::takePicture(){
        std::cout << "The satellite is taking a picture of the location. " << std::endl;
        std::cout << "Loading ...." << std::endl; }


