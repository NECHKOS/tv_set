#include "tvset.h"
#include <iostream>

TVSet::TVSet() { isOn = false; }
void TVSet::turnOn() { isOn = true; }
void TVSet::turnOff() { isOn = false; }
void TVSet::showStatus() {
	if (isOn) std::cout << "TV is on\n";
	else std::cout << "TV is off" << std::endl;
}
void TVSet::setChannelNum(unsigned int fNum) {
	channelNum = fNum;
}
void TVSet::increaseChannelNum() {
	channelNum++;
	if (channelNum > channelQty) channelNum = 1;
}
void TVSet::decreaseChannelNum() {
	channelNum--;
	if (channelNum < 1) channelNum = channelQty;
}