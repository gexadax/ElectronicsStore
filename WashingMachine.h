#pragma once
#include"Appliances.h"

class WashingMachine final : public Appliances
{
protected:
    int _maxLoad;
    int _spinSpeed;
public:
    WashingMachine(int weight, int maxLoad, int spinSpeed);

    void ShowSpecs() override;

};