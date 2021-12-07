#ifndef MICROWAVESATELLITE_H_
#define MICROWAVESATELLITE_H_

#include "Satellite.h"
#include <string>
class MicrowaveSatellite: public Satellite {
    public:
    MicrowaveSatellite();
    MicrowaveSatellite(int );
    //~MicrowaveSatellite();
    
    void takePicture();

    // Getters
    int getSerialNumber();
    float getBatteryRemained();
    void getLocation(std::string);

    protected:
    int serialNumber;
    float batteryRemained;
    std::string location;
    
};
// static int iMicrowaveSatellite;

#endif /*SATELLITE_H_*/