#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    srand(time(0));
    int randomNumber = rand() % 100 + 1;
    int userGuess;
    bool isCorrect = false;

    cout << "Welcome to the number guessing game!" << endl;
    cout << "I have selected a number between 1 and 100." << endl;
    cout << "Try to guess it!" << std::endl;

    while (!isCorrect)
    {
        cout << "Enter your guess: ";
        cin >> userGuess;

        if (userGuess == randomNumber)
        {
            isCorrect = true;
            cout << "Congratulations! You guessed the correct number!" << std::endl;
        }
        else if (userGuess > randomNumber)
        {
            cout << "Your guess is too high. Try again!" << endl;
        }
        else
        {
            cout << "Your guess is too low. Try again!" << endl;
        }
    }

    return 0;
}