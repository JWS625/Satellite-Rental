#include"InfraredSatellite.h"
#include <iostream>

InfraredSatellite::InfraredSatellite(){ iInfraredSatellite++; }
InfraredSatellite::InfraredSatellite(int ){iInfraredSatellite++;}
InfraredSatellite::~InfraredSatellite(){ iInfraredSatellite--;}

void InfraredSatellite::takePicture(){
        std::cout << "The satellite is taking a picture of the location. " << std::endl;
        std::cout << "Loading ...." << std::endl;
    }
