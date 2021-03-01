#include <iostream>
using namespace std;

int main()
{
    string response = "";
    string tester = "dabba doo";
    cout << "watch this yabba:" << tester << endl;
    cout << "what do you say?" << endl;
    getline(cin, response);
    cout << "did you say " << response << "? you cheeky bastard." << endl;

}