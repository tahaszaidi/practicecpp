#include "cat.h"
#include <iostream>

using namespace std;

Cat::Cat()
{

};

Cat::Cat(int newAge, string newName)
{
    setAge(newAge);
    setName(newName);
};

void Cat::setName(string newName)
{
    name = newName;
};

void Cat::setAge(int newAge)
{
    age = newAge;
};

string Cat::getName()
{
    return name;
};

int Cat::getAge()
{
    return age;
};
