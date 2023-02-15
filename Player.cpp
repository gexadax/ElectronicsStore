//#include "Device.h"
#include "Player.h"


Player::Player(int batteryLife, int totalTracks) : Device(batteryLife), _totalTracks(totalTracks)
{
}

void Player::ShowSpecs()
{
	cout << "����� Sony" << "\n" << endl
		<< "����� ������ �� �������: " << _batteryLife << " �" << endl
		<< "���������� ������ ��� ������: " << _totalTracks << endl << endl;
}

