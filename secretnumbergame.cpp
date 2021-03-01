// fix to handle alphabetically inputs

#include <iostream>
using namespace std;

int main()
{
    int secretNumber = 19;
    int numberOfTries = 5;
    int numberOfGuesses = 0;
    int prediction;

    cout << "I am thinking of a number from 1 to 20, you have " << numberOfTries << " tries to get it right. Good luck!" << endl;
    
    while (numberOfGuesses < numberOfTries)
    {
        cin >> prediction;
        if (prediction == secretNumber)
        {
            numberOfGuesses++;
            cout << "Congrats! You got it!" << endl;
            return 0;
        }
        else
        {
            numberOfGuesses++;
            cout << "Try again sweaty! You have " << numberOfTries-numberOfGuesses << " guesses left!" << endl;
        }
    }

    cout << "Sorry you didn't get it, the correct number is " << secretNumber << endl;
    return 0;
}