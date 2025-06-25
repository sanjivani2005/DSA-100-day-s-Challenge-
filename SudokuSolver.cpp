#include <iostream>
using namespace std;

const int N = 9;

// Function to print the board
void printBoard(int board[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

// Check if placing num is valid
bool isSafe(int board[N][N], int row, int col, int num) {
    // Check row and column
    for (int i = 0; i < N; i++) {
        if (board[row][i] == num || board[i][col] == num)
            return false;
    }

    // Check 3x3 subgrid
    int startRow = row - row % 3;
    int startCol = col - col % 3;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i + startRow][j + startCol] == num)
                return false;
        }
    }

    return true;
}

// Backtracking function to solve Sudoku
bool solveSudoku(int board[N][N], int row, int col) {
    // If reached end of board
    if (row == N - 1 && col == N)
        return true;

    // Move to next row
    if (col == N) {
        row++;
        col = 0;
    }

    // Skip filled cells
    if (board[row][col] != 0)
        return solveSudoku(board, row, col + 1);

    // Try numbers 1 to 9
    for (int num = 1; num <= 9; num++) {
        if (isSafe(board, row, col, num)) {
            board[row][col] = num;

            if (solveSudoku(board, row, col + 1))
                return true;

            // Backtrack
            board[row][col] = 0;
        }
    }

    return false; // Trigger backtracking
}

int main() {
    int board[N][N] = {
        {5, 3, 0, 0, 7, 0, 0, 0, 0},
        {6, 0, 0, 1, 9, 5, 0, 0, 0},
        {0, 9, 8, 0, 0, 0, 0, 6, 0},

        {8, 0, 0, 0, 6, 0, 0, 0, 3},
        {4, 0, 0, 8, 0, 3, 0, 0, 1},
        {7, 0, 0, 0, 2, 0, 0, 0, 6},

        {0, 6, 0, 0, 0, 0, 2, 8, 0},
        {0, 0, 0, 4, 1, 9, 0, 0, 5},
        {0, 0, 0, 0, 8, 0, 0, 7, 9}
    };

    if (solveSudoku(board, 0, 0))
        printBoard(board);
    else
        cout << "No solution exists" << endl;

    return 0;
}
