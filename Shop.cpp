#include"Bag.h"
#include"Shop.h"
#include<iostream>
using namespace std;
Shop::Shop()
{
	list = new Bag* [50]; //from 0 to 49 pointer...Bag object for each
	for (int i = 0; i < 50; i++)
	{
		list[i] = nullptr; //just to make sure that non of the pointers point to junk bits and all of them are ready to point to our objects.
	}
	quantity = 0;
	totalProfit = 0;
}
Shop::~Shop()
{
	delete[] list;
}
int Shop::isAvailable(float size, int slots)
{
	for (int i = 0; i < quantity; i++)
	{
		if ((list[i]->getSize() == size) && list[i]->getSlots())
			return i;

	}
	return -1;
}
void Shop::addBag()
{
	Bag* bag1 = new Bag();
	if (quantity < 50)
	{
		bag1->readInfo();
		 list[quantity]= bag1;
	}
	quantity++; //quantity now is really one and when we save the 49 item quantity would become 50 and no more items will be saved
}
Bag* Shop::Get(int index)
{
	if (index - 1 >= 50)//assuming that the user do not now it counts from zero
		return nullptr;
	for (int i = 0; i < quantity; i++)
	{
		if (i == index)
			return list[i];
	}
	return nullptr;

}
void Shop::sell(float size, int slots)
{
	if(isAvailable(size, slots)==-1)
		cout<<"bag is not included in the list"<<endl;
	else
	{
		int index = isAvailable(size, slots);
		totalProfit = totalProfit + list[index]->getPrice();
		delete list[index];
		list[index] = nullptr;

	}
}
void Shop::printAllBags()
{
	for (int i = 0; i < 50; i++)
	{
		if (list[i] == nullptr)
		{
			
			continue;
		}
		cout << "--------------here is the" << i + 1 << " Data" << "-------------" << endl;
		list[i]->printInfo();
	}
}