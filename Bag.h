#pragma once
class Bag
{
private:
	float size;
	int slots;
	double price;
public:
	Bag(float size=15.6, int slots=5);
	bool setSize(float size);
	bool setSlots(int slots);
	bool setPrice(double price);
	float getSize();
	int getSlots();
	double getPrice();
	int compare(Bag bag2);
	void printInfo();
	void readInfo();


};
