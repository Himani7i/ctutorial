#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0)));

    const char choices[] = {'R', 'P', 'S'};
    int userScore = 0, computerScore = 0;
    int rounds;

    cout << "Enter the number of rounds: ";
    cin >> rounds;

    for (int round = 1; round <= rounds; ++round) {
        cout << "\nRound " << round << ":" << endl;

        // User's choice
        cout << "Choose (R: Rock, P: Paper, S: Scissors): ";
        char userChoice;
        cin >> userChoice;

        if (userChoice != 'R' && userChoice != 'P' && userChoice != 'S') {
            cout << "Invalid choice. Please enter R, P, or S." << endl;
            --round; // Repeat the current round
            continue;
        }

        // Computer's choice
        char computerChoice = choices[rand() % 3];

        cout << "Your choice: " << userChoice << "\tComputer's choice: " << computerChoice << endl;

        // Determine the winner
        if (userChoice == computerChoice) {
            cout << "It's a tie!" << endl;
        } else if ((userChoice == 'R' && computerChoice == 'S') ||
                   (userChoice == 'P' && computerChoice == 'R') ||
                   (userChoice == 'S' && computerChoice == 'P')) {
            cout << "You win this round!" << endl;
            ++userScore;
        } else {
            cout << "Computer wins this round!" << endl;
            ++computerScore;
        }
    }

    // Display the final result
    cout << "\nGame Over!" << endl;
    cout << "Your Score: " << userScore << "\tComputer's Score: " << computerScore << endl;

    if (userScore > computerScore) {
        cout << "Congratulations! You win the game!" << endl;
    } else if (userScore < computerScore) {
        cout << "Computer wins the game. Better luck next time!" << endl;
    } else {
        cout << "The game ends in a tie!" << endl;
    }

    return 0;
}