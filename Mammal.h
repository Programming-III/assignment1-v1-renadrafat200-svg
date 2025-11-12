#ifndef MAMMAL_H
#define MAMMAL_H

#include "Animal.h"

#include<iostream>;

include<string>; 
class Mammal :public Animal {
private:
	String Furcolor;
public:
	Mammal();
	Mammal(String Furcolor, String name, int age, bool isHungry);
	~Mammal();
	String getFurcolor();
};
#endif
//define mammal class here







