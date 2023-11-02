#include "doughnuts.h"

/*
	Name:   Doughnut()
	Desc:   Constructor, does nothing
	input:  none
	output: none
	return: none
*/
Doughnut::Doughnut() {}

// sets private values
void Doughnut::setInventory(int value)
{
	inventory = value;
}

// sets private values
void Doughnut::setName(char value[])
{
	strncpy(name, value, 101);
}

// sets private values
void Doughnut::setPrice(double value)
{
	price = value;
}

// sets private values
void Doughnut::setAddIns(char value[])
{
	strncpy(addIns, value, 101);
}

// sets private values
void Doughnut::setType(int value)
{
	type = value;
}

// retrieves private values
int Doughnut::getInventory() const
{
	return inventory;
}

// retrieves private values
void Doughnut::getName(char *namePointer) const
{
	strncpy(namePointer, name, 101);
}

// retrieves private values
double Doughnut::getPrice() const
{
	return price;
}

// retrieves private values
void Doughnut::getAddIns(char *addInsPointer) const
{
	strncpy(addInsPointer, addIns, 101);
}

// retrieves private values
int Doughnut::getType() const
{
	return type;
}
