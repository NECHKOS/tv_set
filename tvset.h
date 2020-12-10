#pragma once
class TVSet {
private:
	bool isOn;
	unsigned int channelNum;
	const int channelQty = 100;

public:
	TVSet();
	void turnOn();
	void turnOff();
	void showStatus();
	void setChannelNum(unsigned int);
	void increaseChannelNum();
	void decreaseChannelNum();
};