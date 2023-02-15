#include "Appliances.h"
#include "WashingMachine.h"


WashingMachine::WashingMachine(int weight, int maxLoad, int spinSpeed) : Appliances(weight), _maxLoad(maxLoad), _spinSpeed(spinSpeed)
{
}

void WashingMachine::ShowSpecs()
{
	cout<< "���������� ������ Zanussi"<<"\n"<<endl
		<< "��� ���������� ������: " << _weight << "��" << endl
		<< "������������ ��������: " << _maxLoad << " ��" << endl
		<< "�������� ������: " << _spinSpeed << " ��/���" << endl << endl;
}
