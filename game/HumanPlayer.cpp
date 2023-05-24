#include "Humanplayer.h"
#include <iostream>
using namespace std;

void HumanPlayer::Turn(int arr[][3], int symbolnumber) {
	while (true) {
		cout << "Хотите поставить игру на паузу?" << endl << "1 - Да\n2 - Нет" << endl;
		int choise;
		cin >> choise;
		switch (choise) {
		case 1: {

			break;
		}
		case 2: {

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
		if (arr[row - 1][column - 1] == 0 && row < 4 && row>0 && column < 4 && column >0) {
			arr[row - 1][column - 1] = symbolnumber;
			break;
		}
		cout << "Неверно выбрано поле" << endl;
	}
}
