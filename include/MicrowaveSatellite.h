#ifndef MICROWAVESATELLITE_H_
#define MICROWAVESATELLITE_H_

#include "Satellite.h"
class MicrowaveSatellite: public Satellite {
    public:
    MicrowaveSatellite();
    MicrowaveSatellite(int );
    //~MicrowaveSatellite();
    
    void takePicture();

    // Getters
    int getSerialNumber();
    float getBatteryRemained();

    protected:
    int serialNumber;
    float batteryRemained;
};
// static int iMicrowaveSatellite;

#endif /*SATELLITE_H_*/