#include <iostream>
using namespace std;

int main ()
{
    int numGrid[5][2] = 
    { 
        {1,2},
        {3,4},
        {5,6},
        {7,8},
        {9,10}
    };

    std::cout << numGrid[2][0] << endl;

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 2; j++)
        {
            cout << numGrid[i][j] ;
        }
        cout << endl;
    }
    return 0;
}