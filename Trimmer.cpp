#include "Appliances.h"
#include "Device.h"
#include "Trimmer.h"

Trimmer::Trimmer(int weight, int batteryLife, int speedModes, int warranty) : Appliances(weight), Device(batteryLife), _speedModes(speedModes), _warranty(warranty)
{
}

void Trimmer::ShowSpecs()
{
	cout << "������� ��� ������� PHILIPS" << "\n" << endl
		<< "��� �������� ��� ������� �����: " << _weight << " �����" << endl
		<< "����� ������ �� �������: " << _batteryLife << " ����" << endl
		<< "���������� ������� ������: " << _speedModes << endl
		<< "��������: " << _warranty <<" �" << endl << endl;
}