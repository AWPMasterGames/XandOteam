#include "Humanplayer.h"
#include <iostream>
using namespace std;

void Humanplayer::_turn(int arr[][3], int symbolnumber) {
	while (true) {
		int row, column;
		cout << "���� ������ ��������� ������?\n";
		cout << "�� ����: ";
		cin >> row;
		cout << "�� �������: ";
		cin >> column;
		if (arr[row - 1][column - 1] == 0) {
			arr[row - 1][column - 1] = symbolnumber;
			break;
		}
	}
}
