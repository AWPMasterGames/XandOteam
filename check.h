#pragma once
#include <iostream>

using namespace std;

class GraphicEngineStub {
private:
	void CheckDraw(); // проверка на ничью
	void CheckWin(); // проверка на выйгрышь 
	void CheckLoss(); // проверка на проигрышь
	void ChackSymbol(); // проверка на то, есть ли символ в клетке или нет
	void printtext(); // после проверки пишет ответ
};

int main() {

}