//#include "Device.h"
#include "Player.h"


Player::Player(int batteryLife, int totalTracks) : Device(batteryLife), _totalTracks(totalTracks)
{
}

void Player::ShowSpecs()
{
	cout << "Плеер Sony" << "\n" << endl
		<< "Время работы от батареи: " << _batteryLife << " ч" << endl
		<< "Количество треков для записи: " << _totalTracks << endl << endl;
}

