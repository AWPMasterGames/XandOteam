#include <iostream>
#include "IGame.h"
#include "Humanplayer.h"
#include "AIPlayer.h"
using namespace std;

void IGame::_select(int arr[][3]) {
	int choise;
	//Visual visual;
	//visual.starttext();
	cin >> choise;
	switch (choise) {
	case 1: {
		game1(arr);
		break;
	}
	case 2: {
		game2(arr);

		break;
	}
	case 3: {
		game3(arr);

		break;
	}
	case 4: {
		game4(arr);

		break;
	}
	default:
		break;
	}
}

void IGame::game1(int arr[][3]) {
	//Visual Field;
	//Check checks;
	//Humanplayer first;
	//Humanplayer second;
	//Field.printfield(arr);
	//while (checks.checkdraw(arr) != 9) {
	//	first._turn(arr, 2);
	//	Field.printfield(arr);
	//	checks.checkwin(arr);
	//	second._turn(arr, 3);
	//	Field.printfield(arr);
	//	checks.checkwin(arr);
	//}
}

void IGame::game2(int arr[][3]) {
	//Visual Field;
	//Check checks;
	//Humanplayer first;
	//AITurn second;
	//Field.printfield(arr);
	//while (checks.checkdraw(arr) != 9) {
	//	first._turn(arr, 2);
	//	Field.printfield(arr);
	//	checks.checkwin(arr);
	//	second._turn(arr, 3);
	//	Field.printfield(arr);
	//	checks.checkwin(arr);
	//}
}

void IGame::game3(int arr[][3]) {
	//Visual Field;
	//Check checks;
	//AITurn first;
	//Humanplayer second;
	//Field.printfield(arr);
	//while (checks.checkdraw(arr) != 9) {
	//	first._turn(arr, 2);
	//	Field.printfield(arr);
	//	checks.checkwin(arr);
	//	second._turn(arr, 3);
	//	Field.printfield(arr);
	//	checks.checkwin(arr);
	//}
}

void IGame::game4(int arr[][3]) {
	//Visual Field;
	//Check checks;
	//AITurn first;
	//AITurn second;
	//Field.printfield(arr);
	//while (checks.checkdraw(arr) != 9) {
	//	first._turn(arr, 2);
	//	Field.printfield(arr);
	//	checks.checkwin(arr);
	//	second._turn(arr, 3);
	//	Field.printfield(arr);
	//	checks.checkwin(arr);
	//}
}
