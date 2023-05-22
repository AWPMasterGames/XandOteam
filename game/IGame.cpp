#include <iostream>
#include "IGame.h"
#include "Humanplayer.h"
#include "AIPlayer.h"
using namespace std;

void IGame::Select(int field[][3]) {
	int choise;
	//Visual visual;
	//visual.starttext();
	cin >> choise;
	switch (choise) {
	case 1: {
		GamePlayerVsPlayer(field);
		break;
	}
	case 2: {
		GamePlayerVsComputer(field);

		break;
	}
	case 3: {
		GameComputerVsPlayer(field);

		break;
	}
	case 4: {
		GameComputerVsComputer(field);

		break;
	}
	default:
		break;
	}
}

void IGame::GamePlayerVsPlayer(int field[][3]) {
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

void IGame::GamePlayerVsComputer(int field[][3]) {
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

void IGame::GameComputerVsPlayer(int field[][3]) {
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

void IGame::GameComputerVsComputer(int field[][3]) {
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
