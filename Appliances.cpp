#include "Appliances.h"

Appliances::Appliances(int weight) : _weight(weight)
{
}

void Appliances::ShowSpecs()
{
    cout << "Вес: " << _weight << endl;
}