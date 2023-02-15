#pragma once
#include"Appliances.h"

class Refrigirator final : public Appliances
{
protected:
    int _foodCapacity;
    int _freezerCapacity;
public:
    Refrigirator(int weight, int foodCapacity, int freezerCapacity);

    void ShowSpecs() override;

};