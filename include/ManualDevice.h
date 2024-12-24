#ifndef MANUALDEVICE_H
#define MANUALDEVICE_H

#include "Device.h"

class ManualDevice : public Device{

public:
ManualDevice() : type(0){}

//virtual
virtual int getId();

//create manual device
ManualDevice createDevice(int id);


//funzioni in più
void setTimerOff(int time);
void getTimerOff();

private:
int timerOff;
int type;

};

#endif