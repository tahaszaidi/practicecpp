#include <iostream>
using namespace std;

double cube(double x)
{
    double result = x * x * x;
    return result;
}

int main()
{
    double answer = cube(3.3);
    cout << answer << endl;
    return 0;
}