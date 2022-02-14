#pragma once
#include"Bag.h"
class Shop
{
private:
	Bag** list;
	int quantity;
	double totalProfit;
public:
	Shop();
	~Shop();
	int isAvailable(float size, int slots);
	void addBag();
	Bag* Get(int index);
	void sell(float size, int slots);


	void printAllBags();
};
