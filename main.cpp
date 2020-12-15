//Автор: Никифоров Павел
//Класс TVset
//Моделирует телевизор
#include "tvset.h"
#include <iostream>
#include <string>
using namespace std;
int main() {
	setlocale(LC_ALL,"Russian");
	string newChannelList[] = {"БТ1","БТ2","БТ3","БТ5", "СТВ", "ОНТ", "МИР",
		"НТВ-Беларусь", "СТС", "БелМузТВ"};
	int size = 10;
	TVSet lg_Ultra8k;
	lg_Ultra8k.showStatus();
	lg_Ultra8k.turnOn();
	lg_Ultra8k.showStatus();
	lg_Ultra8k.turnOff();
	lg_Ultra8k.showStatus();
	lg_Ultra8k.setChannelList(newChannelList,size);
	lg_Ultra8k.turnOn();
	lg_Ultra8k.showStatus();
	lg_Ultra8k.decreaseChannelNum();
	lg_Ultra8k.showStatus();
	lg_Ultra8k.setChannelNum(5);
	lg_Ultra8k.showStatus();
	lg_Ultra8k.increaseChannelNum();
	lg_Ultra8k.showStatus();
	return 0;
}