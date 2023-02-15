#include "Device.h"

Device::Device(int batteryLife) : _batteryLife(batteryLife)
{
}

void Device::ShowSpecs()
{
    cout << "Время работы от батареи: " << _batteryLife << endl;
}