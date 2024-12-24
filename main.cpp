#include "include/Device.h"
#include "include/ManualDevice.h"
#include "include/frigorifero.h"


#include <iostream>

int main(void){

    ManualDevice dev = dev.createDevice(6);

    int i = dev.getId();

    std::cout << i << std::endl;

    return 0;
}