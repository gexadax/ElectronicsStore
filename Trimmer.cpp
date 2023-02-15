#include "Appliances.h"
#include "Device.h"
#include "Trimmer.h"

Trimmer::Trimmer(int weight, int batteryLife, int speedModes, int warranty) : Appliances(weight), Device(batteryLife), _speedModes(speedModes), _warranty(warranty)
{
}

void Trimmer::ShowSpecs()
{
	cout << "Триммер для стражки PHILIPS" << "\n" << endl
		<< "Вес триммера для стрижки волос: " << _weight << " грамм" << endl
		<< "Время работы от батареи: " << _batteryLife << " часа" << endl
		<< "Количество режимов работы: " << _speedModes << endl
		<< "Гарантия: " << _warranty <<" г" << endl << endl;
}