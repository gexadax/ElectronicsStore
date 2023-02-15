#include "Device.h"
#include "SmartPhone.h"


SmartPhone::SmartPhone(int batteryLife, int camRez) : Device(batteryLife), _camRez(camRez)
{
}

void SmartPhone::ShowSpecs()
{
	cout << "Смартфон Samsung s23"<< "\n" << endl
		<< "Время работы от батареи: " << _batteryLife << " ч" << endl
		<< "Разрешение камеры : " << _camRez << " мегапикселей" << endl << endl;
}
