#ifndef FRIGORIFERO_H
#define FRIGORIFERO_H

#include "Device.h"
#include "ManualDevice.h"

class frigorifero : public ManualDevice{

    public:
    frigorifero();

    //getter
    int getId() {
        return id;
    }

    protected:
    std::string name;
    int id;
    double power;
    bool isOn;
    //int priorityLevel;
    

};


#endif