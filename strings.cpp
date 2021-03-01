#include <iostream>
using namespace std;

int main ()
{
    string phrase = "hold up!";
    cout << phrase << endl;
    phrase[0] = 'm';
    cout << phrase << endl;
    cout << phrase.find("d", 0) << endl;
    cout << phrase.substr(5,3) << endl;
    string newPhrase = phrase.substr(5,3);
    cout << newPhrase << endl;
    newPhrase[1] = 'g';
    cout << newPhrase << endl;
}