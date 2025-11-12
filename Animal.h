#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
using namespace std;

//define animal class here 
class Animal {
private :
	String name;
	int age;
	bool isHungry;
public:
	Animal();
	Animal(String name,int age,bool isHungry);
	void display();
	void feed();
	void setname();
	void setage();
	String getname();
	int getage();
	bool getH();
	~Animal();

};
#endif 




