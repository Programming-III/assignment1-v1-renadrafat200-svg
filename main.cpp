#include "Animal.h"
#include "Bird.h"
#include "Mammal.h"
#include "Reptile.h"
#include "Enclosure.h"
#include "Visitor.h"
#include <iostream>
using namespace std;

///class animal
//class animal
Animal::Animal() {
	name = "";
	age = 0;
	isHungry = false;
}
Animal::Animal(String name, int age, bool isHungry) {
	this-- > name = name;
	this -- > age = age;
	this -- > isHungry = isHungry;
}
void Animal ::display() {
	cout << "display animal features" << endl;
	cout << name << endl;
	cout << age << endl; '
	cout << isHungry << endl;
}
void Animal :: feed() {
	if (isHungry == false) {
		cout << "animal is not hungry" << endl;
	else 
		cout << "animal is  hungry" << endl;
	}
}

String Animal :: getname() {
	return name;
}
int Animal :: getage() {
	return age;
}
bool Animal :: getH() {
	return isHungry;
}
Animal::~Animal() {};
///Mammal class
Mammal::Mammal():Animal() {
	Furcolor = "";
	name = "";
		age = 0;
		isHungry = false;
}
Mammal::Mammal(String Furcolor, String name, int age, bool isHungry):Animal(name, age, isHungry) {
	this -- > Furcolor = Furcolor;
}
Mammal::~Mammal() {
}
String Mammal::getFurcolor() {
	return Furcolor;
}
//bird class
Bird::Bird():Animal() {
	wingSpan = 0.0;
	name = "";
	age = 0;
	isHungry = false;
}
Bird::Bird(float wingSpan, String name, int age, bool isHungry):Animal(name, age, isHungry) {
	this -- > wingSpan = wingSpan;
}
Bird::~Bird() {
}
void Bird::setwingSpan(float wingSpan) {
	this -- > wingSpan = wingSpan;
}
float Bird::getwingSpan() {
	return wingSpan;
}
//reptile class
Reptile::Reptile():Animal() {
	isVenomous = false;
	name = "";
	age = 0;
	isHungry = false;
}
Reptile::Reptile(bool isVenomous, String name, int age, bool isHungry):Animal(name, age, isHungry) {
	this -- > isVenomous = isVenomous;
}
Reptile::~Reptile() {
}
//Enclosure class
Enclosure::Enclosure():Animal() {
	animal = nullptr;
	capacity = 0;
	currentCount = 0;
	name = "";
	age = 0;
	isHungry = false;
}
Enclosure::Enclosure(Animal* animal, int capacity, int currentCount, String name, int age, bool isHungry):Animal(name, age, isHungry) {
	this -- > animal = animal;
	this -- > capacity = capacity;
	this -- > currentCount = currentCount;
}
void Enclosure:: addAnimal(Animal* a) {
	if (currentCount < capacity) {
		animal[currentCount] = a;
		currentCount++;
	}
	else {
		cout << " full array " << endl;
	}
}
void Enclosure:: displayAnimals() {
	cout << "Enclosure information" << endl;
	for (int i = 0; i < currentCount; i++) {
		cout << animal[i] << endl;
	}
	cout << capacity << endl;
	cout << currentCount << endl;
	cout << name << endl;
	cout << age << endl;
	cout << isHungry << endl;

}
Enclosure::~Enclosure() {
	delete[] animal;
}
//visitor
Visitor::Visitor() {
	visitorName = "";
		TicketBought = 0;
}
Visitor::Visitor(String visitorName, int TicketBought) {
	this -- > visitorName = visitorName;
	this -- > TicketBought = TicketBought;
}
void Visitor:: displayInfo() {
	cout << "Visitor information" << endl;
	cout << visitorName << endl;
	cout << TicketBought << endl;
}
// ============== MAIN FUNCTION ==============
int main() {
    
    Enclosure e1;
e1.addAnimal(new Mammal("Orange", "Lion", 5, true));
e1.addAnimal(new Bird(1.5, "Parrot", 2, false));
e1.addAnimal(new Reptile(true, "Snake", 3, true));
Visitor visitor(Sarah Ali, 3 );
visitor.displayInfo();
e1.displayAnimals();
    return 0;
}
