#include<iostream>
using namespace std;
#include"Bag.h"
Bag::Bag(float size , int slots )
{
	this->size=size ;
	this->slots=slots;
	price = 0;
}
bool Bag::setSize(float size)
{
	if (size > 0)
	{
		this->size = size;
		return true;
	}
	else
		return false;
 }
bool Bag::setSlots(int slots)
{
	if (slots > 0)
	{
	this->slots = slots;
	return true;
    }
	else
	return false;
}
bool Bag::setPrice(double price)
{
	if (price > 0)
	{
	this->price = price;
	return true;
}
	else
	return false;
}
float Bag::Bag::getSize()
{
	return size;
}
int Bag::getSlots()
{
	return slots;

}
double Bag::getPrice()
{
	return price;
}
int Bag::compare(Bag bag2)
{
	if (this->size == bag2.size)
	{
		if (this->slots == bag2.slots)
			return 0;
		else if ((this->slots) > bag2.slots)
			return 1;
		else
			return -1;
	}
	else if (this->size > bag2.size)
		return 1;
	else
		return -1;

}
void Bag::printInfo()
{
	cout << "here is the bag size" << " " << size << endl;
	cout << "here is the bag slots" << " " << slots << endl;
	cout << "here is the bag price" << " " << price << endl;

}
void Bag::readInfo()
{
	cout << "please enter the inputs as size, slots, price consecutively" << endl;
	
	cin >>size;
	cin >> slots;
	cin >> price;
}