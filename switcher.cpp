#include <iostream>
using namespace std;

string getDayOfWeek(int dayNum)
{
    string day = "";
    
    switch (dayNum)
    {
    case 1:
    day = "Sunday";
    break;
    case 2:
    day = "Monday";
    break;
    case 3:
    day = "Tuesday";
    break;
    case 4:
    day = "Wednesday";
    break;
    case 5:
    day = "Thursday";
    break;
    case 6:
    day = "Friday";
    break;
    case 7:
    day = "Saturday";
    break;
    default:
    cout << "That is not a valid day";
    break;
    }

    return day;
}

int main() {
    int dayNum;
    cout << "Give me a number 1-7: ";
    cin >> dayNum;
    cout << "That day of the week is " << getDayOfWeek(dayNum) << endl; 
    cout << " ye ";
}