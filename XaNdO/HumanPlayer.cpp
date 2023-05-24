#include "Humanplayer.h"
#include "Save.h"
#include "IGame.h"
#include <iostream>
using namespace std;

void HumanPlayer::Turn(int field[][3], int symbolnumber) {
	while (true) {
		cout << "Хотите поставить игру на паузу?" << endl << "1 - Да\n2 - Нет" << endl;
		int choise;
		cin >> choise;
		switch (choise) {
		case 1: {
			Save lox;
			lox.SaveGame(field, symbolnumber);
			cout << "Что дальше?\n1 - Продолжить\n2 - Начать заново" << endl;
			cin >> choise;
			switch (choise) {
			case 1: {
				lox.OutGame(field, symbolnumber);
				break;
			}
			default:
				IGame Game;
				Game.Select(field);
				break;
			}
			break;
		}
		default:
			break;
		}
		int row, column;
		cout << "Куда хотите поставить символ?\n";
		cout << "По ряду: ";
		cin >> row;
		cout << "По столбцу: ";
		cin >> column;
		if (field[row - 1][column - 1] == 0 && row < 4 && row>0 && column < 4 && column >0) {
			field[row - 1][column - 1] = symbolnumber;
			break;
		}
		cout << "Неверно выбрано поле" << endl;
	}
}