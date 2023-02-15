//#include "Appliances.h"
#include "Refrigirator.h"


Refrigirator::Refrigirator(int weight, int foodCapacity, int freezerCapacity) : Appliances(weight), _foodCapacity(foodCapacity), _freezerCapacity(freezerCapacity)
{
}

void Refrigirator::ShowSpecs()
{
	cout << "Холодильник Indesit" << "\n" << endl
		<< "Вес холодильника: " << _weight<< " кг" << endl
		<< "Объем холодильной камеры: " << _foodCapacity << " л" << endl
		<< "Объем морозильной камеры: " << _freezerCapacity << " л" << endl<<endl;
}
