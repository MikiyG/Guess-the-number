#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // The random number generator
    srand(time(0));
    int randomNumber = rand() % 10 + 1; // Generate a random number between 1 and 10

    int guess = 0;

    std::cout << "Welcome to the Guess the Number Game!" << std::endl;
    std::cout << "I'm thinking of a number between 1 and 10." << std::endl;

    // Repeat until the user guesses correctly
    while (guess != randomNumber) {
        std::cout << "Enter your guess: ";
        std::cin >> guess;

        if (guess < 1 || guess > 10) {
            std::cout << "Please enter a number between 1 and 10." << std::endl;
        } else if (guess < randomNumber) {
            std::cout << "Too low! Try again." << std::endl;
        } else if (guess > randomNumber) {
            std::cout << "Too high! Try again." << std::endl;
        } else {
            std::cout << "Congratulations! You guessed the number!" << std::endl;
        }
    }

    return 0;
}
