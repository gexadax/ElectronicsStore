#pragma once
#include"Device.h"
class SmartPhone final : public Device
{
protected:
    int _camRez;
public:
    SmartPhone(int batteryLife, int totalTracks);

    void ShowSpecs() override;


};