#ifndef INVENTORY_H
#define INVENTORY_H

class Inventory
{
private:
    Doughnut *doughnuts;
    int count = 0;

public:
    // constructors
    Inventory();
    Inventory(Doughnut *, int);
    // copy constructor
    Inventory(const Doughnut &aDoughnut);

    void removeByIndex();
    void removeIndex(const int index);
    void listByIngredient();
    void listByType();
    void getInt(char prompt[], const int min, const int max, int &value);
    void insertDoughnut(const Doughnut &newDoughnut);
    void getUpper(char makeUpper[], int &makeCount, char targetCString[]);
    void getCharacterString(char prompt[], const int max, char userPrompt[]);
    void getDouble(char prompt[], const int min, const int max, double &value);
    void addDoughnut();
    bool loadData();
    int getCount();
    void writeToConsole();
    void writeToConsoleSelect(Doughnut *doughnuts, const int count);
    void doughnutType(int num, char doughnut[]);
    void saveAndQuit();
};

#endif