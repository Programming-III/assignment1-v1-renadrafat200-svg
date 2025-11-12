#ifndef BIRD_H
#define BIRD_H

#include "Animal.h"

//define class bird here 



#include<iostream>;

include<string>;
class Bird :public Animal {
private:
	float wingSpan;
public:
	Bird();
	Bird(float wingSpan, String name, int age, bool isHungry);
	~Bird();
	void setwingSpan();
	float getwingSpan();
};
#endif





#endif
