#include <iostream>
using namespace std;
// Structure to represent a player
struct Player {
    string name;
    char symbol;
};

// Function to initialize the game board
void initializeBoard(char board[3][3]) {
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            board[i][j] = ' ';
}

// Function to print the game board
void printBoard(const char board[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j)
            cout << board[i][j] << " ";
        cout << endl;
    }
}

// Function to make a move on the board
bool makeMove(char board[3][3], int row, int col, char symbol) {
    if (board[row][col] == ' ') {
        board[row][col] = symbol;
        return true; // Move successful
    }
    return false; // Move unsuccessful
}

// Function to check for a win
bool checkWin(const char board[3][3], char symbol) {
    // Check rows and columns
    for (int i = 0; i < 3; ++i)
        if ((board[i][0] == symbol && board[i][1] == symbol && board[i][2] == symbol) ||
            (board[0][i] == symbol && board[1][i] == symbol && board[2][i] == symbol))
            return true;

    // Check diagonals
    if ((board[0][0] == symbol && board[1][1] == symbol && board[2][2] == symbol) ||
        (board[0][2] == symbol && board[1][1] == symbol && board[2][0] == symbol))
        return true;

    return false;
}

// Function to check for a draw
bool checkDraw(const char board[3][3]) {
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            if (board[i][j] == ' ')
                return false; // If there is an empty space, the game is not a draw

    return true; // All spaces are filled, and no player has won
}

int main() {

    char board[3][3];
    initializeBoard(board);

    Player player1, player2;
    player1.name = "Player 1";
    player1.symbol = 'X';
    player2.name = "Player 2";
    player2.symbol = 'O';

    Player* currentPlayer = &player1;

    int row, col;

    do {
        cout << currentPlayer->name << "'s turn (" << currentPlayer->symbol << "):" << endl;
        printBoard(board);

        cout << "Enter row (0-2): ";
        cin >> row;
        cout << "Enter column (0-2): ";
        cin >> col;

        if (row >= 0 && row < 3 && col >= 0 && col < 3) {
            if (makeMove(board, row, col, currentPlayer->symbol)) {
                if (checkWin(board, currentPlayer->symbol)) {
                    printBoard(board);
                    cout << currentPlayer->name << " wins!" << endl;
                    break;
                } else if (checkDraw(board)) {
                    printBoard(board);
                    cout << "It's a draw!" << endl;
                    break;
                } else {
                    currentPlayer = (currentPlayer == &player1) ? &player2 : &player1;
                }
            } else {
                cout << "Invalid move. Try again." << endl;
            }
        } else {
            cout << "Invalid row or column. Try again." << endl;
        }
    } while (true);

    return 0;
}

