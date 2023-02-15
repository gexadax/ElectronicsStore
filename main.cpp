#include "main.h"

int main() {
	setlocale(LC_ALL, "");

	IElectronics* warehouse[5];

	warehouse[0] = new Player(48, 2000);
	warehouse[1] = new SmartPhone(20, 108);
	warehouse[2] = new Refrigirator(63,185, 104);
	warehouse[3] = new WashingMachine(80,6,1200);
	warehouse[4] = new Trimmer(500,3,3,1);

	bool open = true;
	while (open)
	{
		cout << "�������� ����� :" << endl
			<< "1 - ����� Sony" << endl
			<< "2 - �������� Samsung s23" << endl
			<< "3 - ����������� Indesit" << endl
			<< "4 - ���������� ������ Zanussi" << endl
			<< "5 - ������� ��� ������� PHILIPS" << endl
			<< "0 ����� �����" << endl << endl;
		int choice;
		cin >> choice;
		cout << endl;
		switch (choice)
		{
		case 1:
			warehouse[0]->ShowSpecs();
			break;

		case 2:
			warehouse[1]->ShowSpecs();
			break;

		case 3:
			warehouse[2]->ShowSpecs();
			break;

		case 4:
			warehouse[3]->ShowSpecs();
			break;

		case 5:
			warehouse[4]->ShowSpecs();
			break;

		case 0:
			cout << "������ �������������!" << "\n" << endl;
			open = false;
			break;

		default:
			cout << "�������� ������� �� 1 �� 4 ��� 0, ����� �����" << endl;
			break;
		}
	}

	delete warehouse[0];
	delete warehouse[1];
	delete warehouse[2];
	delete warehouse[3];
	delete warehouse[4];


	return 0;
}