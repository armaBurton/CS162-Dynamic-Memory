#ifndef DOUGHNUTS_H
#define DOUGHNUTS_H

using namespace std;

// libraries
#include <fstream>
#include <ostream>
#include <iostream>
#include <iomanip>
#include <cstring>
#include <limits>
#include <cctype>

class Doughnut
{
private:
	int inventory = 0;
	char name[101];
	double price;
	char addIns[101];
	int type = 0;

public:
	Doughnut();
	void setInventory(int value);
	void setName(char value[]);
	void setPrice(double value);
	void setAddIns(char value[]);
	void setType(int value);
	int getInventory() const;
	void getName(char *namePointer) const;
	double getPrice() const;
	void getAddIns(char *addInsPointer) const;
	int getType() const;
};

#endif
