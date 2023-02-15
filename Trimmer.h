#pragma once
#include"Appliances.h"
#include"Device.h"

class Trimmer final : public Appliances, Device
{
protected:
    int _speedModes;
    int _warranty;
public:
    Trimmer(int weight, int batteryLife, int speedModes, int warranty);

    void ShowSpecs() override;

};