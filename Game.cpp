#include <iostream>
#include <time.h>
#include <string>
#include "Game.h"
#include "Modes.h"
using namespace std;

int arr[3][3];

class I_game {
public:
	virtual void start();
	virtual void set();
	void select() {
		int a;
		cout << "�������� ��� ����:\n1 - ����� ������� ������\n2 - ����� ������ ����������\n3 - ��������� ������ ����������";
		cin >> a;
		switch (a){
		case 1: {
			PvP player1;
			player1.start();
			break;
		}
		case 2:{
			PvC player2;
			player2.start();
			break;
		}
		case 3: {
			CvC player3;
			player3.start();
			break; 
		}
		default:
			break;
		}
	}
};