#include <iostream>

using namespace std;

// Enumeration for the choices
enum Choices { ROCK = 1, PAPER, SCISSORS };

// Structure to represent a player
struct Player {
    string name;
    int choice;
};

// Function to get the user's choice
int getUserChoice() {
    int choice;
    cout << "Enter your choice (1 for Rock, 2 for Paper, 3 for Scissors): ";
    cin >> choice;
    return choice;
}

// Function to get the computer's choice
int getComputerChoice(int round) {
    // A simple deterministic sequence based on the round number
    return (round % 3) + 1;
}

// Function to determine the winner
void determineWinner(Player* user, Player* computer) {
    cout << "Computer chose: ";
    switch (computer->choice) {
        case ROCK:
            cout << "Rock";
            break;
        case PAPER:
            cout << "Paper";
            break;
        case SCISSORS:
            cout << "Scissors";
            break;
    }
    cout << endl;

    cout << user->name << " chose: ";
    switch (user->choice) {
        case ROCK:
            cout << "Rock";
            break;
        case PAPER:
            cout << "Paper";
            break;
        case SCISSORS:
            cout << "Scissors";
            break;
    }
    cout << endl;

    // Determine the winner
    if (user->choice == computer->choice) {
        cout << "It's a tie!" << endl;
    } else if ((user->choice == ROCK && computer->choice == SCISSORS) ||
               (user->choice == PAPER && computer->choice == ROCK) ||
               (user->choice == SCISSORS && computer->choice == PAPER)) {
        cout << user->name << " wins!" << endl;
    } else {
        cout << "Computer wins!" << endl;
    }
}

int main() {
    const int MAX_ROUNDS = 3;
    Player user;
    Player computer;
    int userWins = 0, computerWins = 0;

    cout << "Welcome to Rock, Paper, Scissors!" << endl;
    cout << "Enter your name: ";
    cin >> user.name;

    for (int round = 1; round <= MAX_ROUNDS; ++round) {
        cout << "\nRound " << round << endl;

        // Get user and computer choices
        user.choice = getUserChoice();
        computer.choice = getComputerChoice(round);

        // Determine the winner
        determineWinner(&user, &computer);

        // Update scores
        if (user.choice != computer.choice) {
            if (user.choice == ROCK || user.choice == PAPER || user.choice == SCISSORS) {
                if (round == MAX_ROUNDS) {
                    cout << "\nFinal Score:\n";
                    cout << user.name << ": " << userWins << " wins\n";
                    cout << "Computer: " << computerWins << " wins\n";
                    if (userWins > computerWins) {
                        cout << user.name << " wins the game!\n";
                    } else if (computerWins > userWins) {
                        cout << "Computer wins the game!\n";
                    } else {
                        cout << "It's a tie!\n";
                    }
                } else {
                    cout << "\nCurrent Score:\n";
                    cout << user.name << ": " << userWins << " wins\n";
                    cout << "Computer: " << computerWins << " wins\n";
                }
            } else {
                cout << "Invalid choice. Please enter a valid choice.\n";
                --round; // Decrement round to repeat the same round
            }
        } else {
            cout << "It's a tie! No scores updated.\n";
            --round; // Decrement round to repeat the same round
        }
    }

    return 0;
}
