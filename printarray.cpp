#include <iostream>
using namespace std; 

int main() 
{
    int array[] = {3,5,2,6,12,23,4,3,2,124,5};
    int arraySize = sizeof(array)/sizeof(array[0 ]);
    for(int x = 0; x < arraySize; x++)
    {
        cout << array[x] << endl;
    }
    return 0;
}

