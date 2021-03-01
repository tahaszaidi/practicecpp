#include <iostream>
using namespace std;

int main() 
{
    int age = 25;
    double gpa = 1.0;
    string name = "Taha";

    int *pAge = &age;

    cout << "The value at pAge is " << *pAge << " but the address of pAge is " << pAge << endl;
    cout << "The value of age is " << age << " but the address of age is.. " << &age << endl;
 
    cout << "I can deference the pointer and find it's value by doing *&age, here look: " << *&age << endl;
    cout << "If I do &*&age, I will get the address again: " << &*&age << endl;
    }