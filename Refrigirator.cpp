//#include "Appliances.h"
#include "Refrigirator.h"


Refrigirator::Refrigirator(int weight, int foodCapacity, int freezerCapacity) : Appliances(weight), _foodCapacity(foodCapacity), _freezerCapacity(freezerCapacity)
{
}

void Refrigirator::ShowSpecs()
{
	cout << "����������� Indesit" << "\n" << endl
		<< "��� ������������: " << _weight<< " ��" << endl
		<< "����� ����������� ������: " << _foodCapacity << " �" << endl
		<< "����� ����������� ������: " << _freezerCapacity << " �" << endl<<endl;
}
