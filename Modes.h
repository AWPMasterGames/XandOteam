#include <iostream>
#include <time.h>
#include <string>
using namespace std;

//int arr[3][3];

class PvP : public IGame {
public:
	int scale = 0;
	void start() {
		cout << "�� ������� ����� ����� ������ ������.\n";
	}
	void set(int arr[][3]) {
		int a, b;
		cout << "���� ������ ��������� ���� ������?\n";
		cout << "�� ����: ";
		cin >> a;
		cout << "�� �������: ";
		cin >> b;
		if (scale % 2 == 1) {
			arr[a - 1][b - 1] = 3;
		}
		else
			arr[a - 1][b - 1] = 2;
		scale++;
	}
};

class PvC : public IGame {
public:
	void start() {
		cout << "�� ������� ����� ����� ������ ����������.\n";
	}
	void set(int arr[][3]) {
		int a, b;
		cout << "���� ������ ��������� ���� ������?\n";
		cout << "�� ����: ";
		cin >> a;
		cout << "�� �������: ";
		cin >> b;
		arr[a - 1][b - 1] = 3;
	}
	void set_pc(int arr[][3]) {
		srand(time(NULL));
		arr[rand() % 2][rand() % 2] = 2;
	}
};

class CvC : public IGame {
public:
	void start() {
		cout << "�� ������� ����� ��������� ������ ����������.\n";
	}
	void set_pc(int arr[][3]) {
		srand(time(NULL));
		arr[rand() % 2][rand() % 2] = 2;
	}
};