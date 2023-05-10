#include <iostream>
#include <time.h>
#include <string>
using namespace std;

class I_game {
public:
	virtual void start(){};               // начинаем игру
	virtual void set(){};                 // поставаить символ
	virtual void pause(){};                 // для сохранения
};