#ifndef SATELLITE_H_
#define SATELLITE_H_

class Satellite{
public:
virtual int getSerialNumber() = 0;
virtual float getBatteryRemained() = 0;
virtual void takePicture() = 0;
int serialNum;
float batteryRemained;

};

#endif /* SATELLITE_H_ */