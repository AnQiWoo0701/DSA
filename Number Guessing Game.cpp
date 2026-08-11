#include <iostream>
#include <string>
using namespace std;

class GuessingGame {
private:
    string playerName;      // Name of the player
    int secretNumbers[3];   // Secret numbers for Easy, Medium, Hard
    int score;               // Player's accumulated score

public:
    // ---------- Default Constructor ----------
    // Used when no player name is given. Sets a default name and
    // fixed secret numbers, and starts the score at 0.
    GuessingGame() {
        playerName = "Player";
        secretNumbers[0] = 7;    // Easy   (1-10)
        secretNumbers[1] = 35;   // Medium (1-50)
        secretNumbers[2] = 82;   // Hard   (1-100)
        score = 0;
    }

    // ---------- Parameterized Constructor ----------
    // Lets the caller set the player's name while keeping the same
    // secret numbers and an initial score of 0.
    GuessingGame(string name) {
        playerName = name;
        secretNumbers[0] = 7;
        secretNumbers[1] = 35;
        secretNumbers[2] = 82;
        score = 0;
    }

    // ---------- displayMenu() ----------
    // Prints the menu and returns the player's choice.
    int displayMenu() {
        int choice;
        cout << "\n========== NUMBER GUESSING GAME ==========\n";
        cout << "1. Easy\n";
        cout << "2. Medium\n";
        cout << "3. Hard\n";
        cout << "4. Display Score\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        return choice;
    }

    // ---------- checkGuess() ----------
    // Compares the player's guess to the secret number.
    // Returns  0 if correct, 1 if the guess is too high,
    // -1 if the guess is too low.
    int checkGuess(int guess, int secret) {
        if (guess == secret) {
            return 0;
        } else if (guess > secret) {
            return 1;
        } else {
            return -1;
        }
    }

    // ---------- startGame() ----------
    // Runs one round of the game for the chosen difficulty level.
    // level: 1 = Easy, 2 = Medium, 3 = Hard
    void startGame(int level) {
        int minRange, maxRange, attempts, points;
        int secret = secretNumbers[level - 1]; // array index 0,1,2

        // Set the range, number of attempts, and reward points
        // according to the chosen difficulty level.
        switch (level) {
            case 1:
                minRange = 1; maxRange = 10; attempts = 5; points = 5;
                cout << "\nYou selected EASY level.\n";
                break;
            case 2:
                minRange = 1; maxRange = 50; attempts = 7; points = 10;
                cout << "\nYou selected MEDIUM level.\n";
                break;
            case 3:
                minRange = 1; maxRange = 100; attempts = 10; points = 15;
                cout << "\nYou selected HARD level.\n";
                break;
            default:
                cout << "\nInvalid level.\n";
                return;
        }

        cout << "Guess a number between " << minRange << " and " << maxRange << ".\n";
        cout << "You have " << attempts << " attempts.\n";

        bool guessedCorrectly = false;

        // Loop lets the player keep guessing until they either
        // guess correctly or run out of attempts.
        for (int i = 1; i <= attempts; i++) {
            int guess;
            cout << "Enter your guess: ";
            cin >> guess;

            int result = checkGuess(guess, secret);

            if (result == 0) {
                cout << "Congratulations!\n";
                cout << "You guessed the correct number!\n";
                score += points;               // add points for this level
                guessedCorrectly = true;
                break;
            } else if (result == 1) {
                cout << "Too high!\n";
            } else {
                cout << "Too low!\n";
            }
        }

        if (!guessedCorrectly) {
            cout << "Sorry, you ran out of attempts. The number was " << secret << ".\n";
        }

        displayScore();
    }

    // ---------- displayScore() ----------
    // Shows the player's name and current score.
    void displayScore() {
        cout << playerName << "'s Score: " << score << "\n";
    }
};

// ---------------- main() ----------------
int main() {
    string name;
    cout << "Enter your name: ";
    cin >> name;

    // Parameterized constructor is used here so the game
    // remembers the player's name throughout the session.
    GuessingGame game(name);

    int choice;
    do {
        choice = game.displayMenu();

        switch (choice) {
            case 1:
            case 2:
            case 3:
                game.startGame(choice);
                break;
            case 4:
                game.displayScore();
                break;
            case 5:
                cout << "Thanks for playing! Goodbye.\n";
                break;
            default:
                cout << "Invalid choice, please try again.\n";
        }
    } while (choice != 5);

    return 0;
}