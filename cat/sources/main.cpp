#include <iostream>
#include "cat.h"

using namespace std; 




int main ()
{
    Cat cat1(5,"baby");
   // Cat cat1(0,"");
    cout << cat1.getAge();
    cout << cat1.getName();
    return 0;
}