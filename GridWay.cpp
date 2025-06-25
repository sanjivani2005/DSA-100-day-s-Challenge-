#include <iostream>
using namespace std;

// Function to count paths using backtracking
int countPaths(int i, int j, int m, int n) {
    // Base case: reached bottom-right cell
    if (i == m - 1 && j == n - 1) {
        return 1;
    }

    // If out of bounds
    if (i >= m || j >= n) {
        return 0;
    }

    // Move right and down
    int right = countPaths(i, j + 1, m, n);
    int down = countPaths(i + 1, j, m, n);

    return right + down;
}

int main() {
    int m, n;
    cout << "Enter number of rows (m): ";
    cin >> m;
    cout << "Enter number of columns (n): ";
    cin >> n;

    int totalWays = countPaths(0, 0, m, n);
    cout << "Total ways to reach (" << m << "x" << n << ") grid: " << totalWays << endl;

    return 0;
}
