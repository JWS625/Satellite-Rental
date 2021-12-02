#include <iostream>
#include"InfraredSatellite.h"

InfraredSatellite::InfraredSatellite(){ iInfraredSatellite++; }
InfraredSatellite::InfraredSatellite(int ){iInfraredSatellite++;}
InfraredSatellite::~InfraredSatellite(){ iInfraredSatellite--;}

float InfraredSatellite::getBatteryRemained(){return batteryRemained; }
int InfraredSatellite::getSerialNumber(){return serialNumber;}
void InfraredSatellite::takePicture(){
        std::cout << "The satellite is taking a picture of the location. " << std::endl;
        std::cout << "Loading ...." << std::endl;
    }
