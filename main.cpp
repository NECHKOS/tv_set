//Автор: Никифоров Павел
//
//Класс TVset
//Моделирует телевизор
#include "tvset.h"
using namespace std;
int main() {
	TVSet lg_Ultra8k;
	lg_Ultra8k.showStatus();
	lg_Ultra8k.turnOn();
	lg_Ultra8k.showStatus();
	lg_Ultra8k.turnOff();
	lg_Ultra8k.showStatus();
	return 0;
}