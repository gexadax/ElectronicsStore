#include "Appliances.h"
#include "WashingMachine.h"


WashingMachine::WashingMachine(int weight, int maxLoad, int spinSpeed) : Appliances(weight), _maxLoad(maxLoad), _spinSpeed(spinSpeed)
{
}

void WashingMachine::ShowSpecs()
{
	cout<< "Стиральная машина Zanussi"<<"\n"<<endl
		<< "Вес стиральной машины: " << _weight << "кг" << endl
		<< "Максимальная загрузка: " << _maxLoad << " кг" << endl
		<< "Скорость отжима: " << _spinSpeed << " об/мин" << endl << endl;
}
