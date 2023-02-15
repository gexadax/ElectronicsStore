#pragma once
#include <iostream>
using namespace std;

class IElectronics
{
public:
    virtual void ShowSpecs() = 0;
    virtual ~IElectronics() = default;
};