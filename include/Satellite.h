#ifndef SATELLITE_H_
#define SATELLITE_H_

class Satellite{
public:
virtual int getSerialNumber() = 0;
virtual float getBatteryRemained() = 0;
virtual void takePicture() = 0;
int serialNum;
float batteryRemained;
//virtual ~Satellite() = 0;
};

#endif /* SATELLITE_H_ */