#ifndef ENCLOSURE_H
#define ENCLOSURE_H

#include "Animal.h"

//define enclosure class here 

#include<iostream>;
include<string>;

class Enclosure :public Animal {
private:
	Animal* animal;
	int capacity;
	int currentCount;
public:
	void addAnimal(Animal* a);
	void displayAnimals();
	Enclosure();
	Enclosure(Animal* animal, int capacity, int currentCount, String name, int age, bool isHungry);
	~Enclosure();
}
#endif;









