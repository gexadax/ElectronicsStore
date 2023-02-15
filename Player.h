#pragma once
#include"Device.h"
class Player final : public Device
{
protected:
    int _totalTracks;
public:
    Player(int batteryLife, int totalTracks);

    void ShowSpecs() override;


};