#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime>   // for time()

using namespace std;

int main() {
    // Step 1: Initialize the random number generator
    srand(static_cast<unsigned int>(time(0)));
    int secretNumber = rand() % 100 + 1; // random number between 1 and 100
    int guess;
    int attempts = 0;
    const int maxAttempts = 10;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have selected a number between 1 and 100." << endl;
    cout << "You have " << maxAttempts << " attempts to guess the number." << endl;

    // Step 2: Game loop
    while (attempts < maxAttempts) {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        // Step 3: Conditional logic to provide feedback
        if (guess < secretNumber) {
            cout << "Too low!" << endl;
        } else if (guess > secretNumber) {
            cout << "Too high!" << endl;
        } else {
            cout << "Congratulations! You guessed the number in " << attempts << " attempts." << endl;
            break;
        }

        // Step 4: Check if attempts are exhausted
        if (attempts == maxAttempts) {
            cout << "Sorry, you've used all your attempts. The number was " << secretNumber << "." << endl;
        }
    }

    return 0;
}
