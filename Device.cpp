#include "Device.h"

Device::Device(int batteryLife) : _batteryLife(batteryLife)
{
}

void Device::ShowSpecs()
{
    cout << "����� ������ �� �������: " << _batteryLife << endl;
}