#ifndef CAT_H
#define CAT_H
#include <iostream>

using namespace std;

class Cat
{
    private:
        int age;
        string name;
    public:
        Cat();
        Cat(int newAge, string newName);
        void setName(string newName);
        void setAge(int newAge);
        string getName();
        int getAge();
};

#endif