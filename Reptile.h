#ifndef REPTILE_H
#define REPTILE_H

#include "Animal.h"

//define reptile class here

#include<iostream>;

include<string>;
class Reptile :public Animal {
private:
	bool isVenomous;
public:
	Reptile();
	Reptile(bool isVenomous, String name, int age, bool isHungry);
	~Reptile();

}








#endif
