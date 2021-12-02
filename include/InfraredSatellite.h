#ifndef INFRAREDSATELLITE_H_
#define INFRAREDSATELLITE_H_

#include "Satellite.h"

class InfraredSatellite: public Satellite {
public:
    InfraredSatellite();
    InfraredSatellite(int);
    ~InfraredSatellite();

    float getBatteryRemained();
    int getSerialNumber();
    void takePicture();
protected:
    int serialNumber;
    float batteryRemained;
    
};
static int iInfraredSatellite;

#endif /*INFRAREDSATELLITE_H_*/