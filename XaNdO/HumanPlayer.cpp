#include "Humanplayer.h"
#include "Save.h"
#include "IGame.h"
#include <iostream>
using namespace std;

void HumanPlayer::Turn(int field[][3], int symbolnumber) {
	while (true) {
		cout << "������ ��������� ���� �� �����?" << endl << "1 - ��\n2 - ���" << endl;
		int choise;
		cin >> choise;
		switch (choise) {
		case 1: {
			Save lox;
			lox.SaveGame(field, symbolnumber);
			cout << "��� ������?\n1 - ����������\n2 - ������ ������" << endl;
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
		cout << "���� ������ ��������� ������?\n";
		cout << "�� ����: ";
		cin >> row;
		cout << "�� �������: ";
		cin >> column;
		if (field[row - 1][column - 1] == 0 && row < 4 && row>0 && column < 4 && column >0) {
			field[row - 1][column - 1] = symbolnumber;
			break;
		}
		cout << "������� ������� ����" << endl;
	}
}