#pragma once
#include "IElectronics.h"

class Appliances : virtual public IElectronics
{
public:
    Appliances(int weight);
    void ShowSpecs() override;

protected:
    int _weight;
};