#include "doughnuts.h"

/*
	Name:   Doughnut()
	Desc:   Constructor, does nothing
	input:  none
	output: none
	return: none
*/
Doughnut::Doughnut() // Default constructor
{
	inventory = 0;
	strcpy(name, "No Name");
	price = 0.0;
	strcpy(addIns, "None");
	type = 0;
}

Doughnut::Doughnut( // new Item Constructor
	int newInventory,
	char *newName,
	double newPrice,
	char *newAddIns,
	int newType)
{
	inventory = newInventory;
	name = new char[MAXCHAR];
	strcpy(name, newName);
	price = newPrice;
	addIns = new char[MAXCHAR];
	strcpy(addIns, newAddIns);
	type = newType;
}

// copy constructor
Doughnut::Doughnut(const Doughnut &aDoughnut)
{
	name = new char[strlen(aDoughnut.name) + 1];
	addIns = new char[strlen(aDoughnut.addIns) + 1];

	*this = aDoughnut;
}

// sets private values
void Doughnut::setInventory(int value)
{
	inventory = value;
}

// sets private values
void Doughnut::setName(char *value)
{
	strncpy(name, value, 101);
}

// sets private values
void Doughnut::setPrice(double value)
{
	price = value;
}

// sets private values
void Doughnut::setAddIns(char *value)
{
	strncpy(addIns, value, 101);
}

// sets private values
void Doughnut::setType(int value)
{
	type = value;
}

// retrieves private values
int Doughnut::getInventory()
{
	return inventory;
}

// retrieves private values
void Doughnut::getName(char *namePointer)
{
	strncpy(namePointer, name, 101);
}

// retrieves private values
double Doughnut::getPrice()
{
	return price;
}

// retrieves private values
void Doughnut::getAddIns(char *addInsPointer)
{
	strncpy(addInsPointer, addIns, 101);
}

// retrieves private values
int Doughnut::getType()
{
	return type;
}
