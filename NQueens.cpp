#include <iostream>
#include <vector>
using namespace std;

// Print the board
void printBoard(vector<vector<char>> &board) {
    int n = board.size();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    cout << "------------" << endl;
}

// Check if it's safe to place a queen
bool isSafe(int row, int col, vector<vector<char>> &board, int n) {
    // Check column
    for (int i = 0; i < row; i++) {
        if (board[i][col] == 'Q') return false;
    }

    // Check left diagonal
    for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j] == 'Q') return false;
    }

    // Check right diagonal
    for (int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++) {
        if (board[i][j] == 'Q') return false;
    }

    return true;
}

// Backtracking function
void solve(int row, vector<vector<char>> &board, int n) {
    if (row == n) {
        printBoard(board);
        return;
    }

    for (int col = 0; col < n; col++) {
        if (isSafe(row, col, board, n)) {
            board[row][col] = 'Q';          // Place queen
            solve(row + 1, board, n);       // Recurse
            board[row][col] = '.';          // Backtrack
        }
    }
}

int main() {
    int n;
    cout << "Enter the value of N for N-Queens: ";
    cin >> n;

    vector<vector<char>> board;

    for (int i = 0; i < n; i++) {
        vector<char> newRow;
        for (int j = 0; j < n; j++) {
            newRow.push_back('.');
        }
        board.push_back(newRow);
    }

    cout << "Solutions to the " << n << "-Queens problem:\n";
    solve(0, board, n);

    return 0;
}
