#include <iostream>
#include "IGame.h"
#include "Humanplayer.h"
#include "AIPlayer.h"
using namespace std;

void IGame::_select(int arr[][3]) {
	int choise;
	cout << "Выберите тип игры:\n1 - Игрок против игрока\n2 - Игрок против компьютера\n3 - Компьютер против игрока\n4 - Компьютер против компьютера";
	cin >> choise;
	switch (choise) {
	case 1: {
//		Visual Field;
		Humanplayer first;
		Humanplayer second;
//		Field.Field(arr);

		break;
	}
	case 2: {
		Humanplayer first;
		AITurn second;
		break;
	}
	case 3: {
		AITurn first;
		Humanplayer second;
		break;
	}
	case 4: {
		AITurn first;
		AITurn second;
		break;
	}
	default:
		break;
	}
}
