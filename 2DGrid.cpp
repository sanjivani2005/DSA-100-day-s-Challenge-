#include <iostream>
using namespace std;

int main() {
    int rows = 5, cols = 5;

    // Create and fill a 2D grid
    int grid[5][5];
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            grid[i][j] = i * cols + j + 1; // Fill with 1, 2, 3,...
        }
    }

    // Print the grid
    cout << "2D Grid:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << grid[i][j] << "\t";
        }
        cout << "\n";
    }

    return 0;
}
