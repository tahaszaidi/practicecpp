#include <iostream>
#include <cmath>
using namespace std;

double square(double x)
{
    return x*x;
}

double squareRoot(double x)
{
    return sqrt(x);
}

void printSquare(double x)
{
    cout << "the square of " << x << " is " << square(x) << endl;
}

void printSquareRoot(double x)
{
    cout << "the square root of " << x << " is " << squareRoot(x) << endl;
}

int main()
{
    char type;
    cout << "feeling like drizzy? [y/n]" << endl;
    cin >> type;

    if(type == 'y' || type =='Y')
    {
        printSquareRoot(69);
    }
    else if (type == 'n' || type == 'N')
    {
        printSquare(7);
    }
    else
    {
        cout << "invalid response mate" << endl;
    }
}