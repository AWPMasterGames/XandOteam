#include <iostream>
#include <time.h>
#include <string>
using namespace std;

class I_game {
public:
	virtual void start(){};               // �������� ����
	virtual void set(){};                 // ���������� ������
	virtual void pause(){};                 // ��� ����������
};