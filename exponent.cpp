#include <iostream>
using namespace std;

int exponent(int base, int power)
{
    int result = 1;
    for(int i = 0; i < power; i++)
    {
        result = result * base;
    }
    return result;
}

int main()
{
    cout << exponent(2,3) << endl;
}