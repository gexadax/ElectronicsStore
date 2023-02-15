#include "Device.h"
#include "SmartPhone.h"


SmartPhone::SmartPhone(int batteryLife, int camRez) : Device(batteryLife), _camRez(camRez)
{
}

void SmartPhone::ShowSpecs()
{
	cout << "�������� Samsung s23"<< "\n" << endl
		<< "����� ������ �� �������: " << _batteryLife << " �" << endl
		<< "���������� ������ : " << _camRez << " ������������" << endl << endl;
}
