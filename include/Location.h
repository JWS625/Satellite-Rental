#ifndef LOCATION_H_
#define LOCATION_H_

#include"InfraredSatellite.h"
#include"MicrowaveSatellite.h"


class Location: public InfraredSatellite, MicrowaveSatellite{
public:
    Location();

    Location(double , double );

protected:
    double x;
    double y;
};
#endif /* LOCATION_H_ */