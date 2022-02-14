#include<iostream>
#include"Bag.h"
#include"Shop.h"
using namespace std;

int main()
{
	Shop s;
	for (int i = 0; i < 3; i++)
	{
		cout << "enter the" << " " << i+1 << " " << " bag"<<endl;
		s.addBag();
	}
	s.printAllBags();
	
	Bag* PB = nullptr;
	PB=new Bag(15.6,7);
	PB->setPrice(130);
	
	
	cout << " now we are gonna make a comparison between the second bag and our bag, consecutively they are" << endl;
	Bag* Ptr = s.Get(1);
	Ptr->printInfo();
	cout << "*********AND*******" << endl;
	PB->printInfo();
	if (Ptr->compare(*PB) == 1)
	{
		cout << "the first bag is bigger" << endl;
		Ptr->printInfo();
	}
	else if (Ptr->compare(*PB) == -1)
	{
		cout << "the second bag is bigger" << endl;
		PB->printInfo();
	}
	else
	{
		cout << "they are equal" << endl;
		PB->printInfo();
		Ptr->printInfo();
	}
	Bag* sold=s.Get(1);
	

	s.sell(sold->getSize(), sold->getSlots());
	s.printAllBags();
	//every time i put the destructor, a run tie error hapeens!! 	s.~Shop();

	return 0;
}