#ifndef INFRAREDSATELLITE_H_
#define INFRAREDSATELLITE_H_

#include "Satellite.h"
#include <string>

class InfraredSatellite: public Satellite {
public:
    InfraredSatellite();
    InfraredSatellite(int);
    //~InfraredSatellite();

    float getBatteryRemained();
    int getSerialNumber();
    void takePicture();
    void getLocation(std::string);
protected:
    int serialNumber;
    float batteryRemained;
    std::string location;
};
// static int iInfraredSatellite;

#endif /*INFRAREDSATELLITE_H_*/