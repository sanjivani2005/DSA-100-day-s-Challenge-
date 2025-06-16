#include <iostream>
using namespace std;

void func(int mat[][4], int n, int m) {
    cout << "Addresses of each row:" << endl;
    cout << "0th row pointer (mat)       : " << mat << endl;
    cout << "1st row pointer (mat+1)     : " << (mat + 1) << endl;
    cout << "2nd row pointer (mat+2)     : " << (mat + 2) << endl;

    cout << "\nValues of first elements in each row:" << endl;
    cout << "0th row value *(mat)        : " << *mat[0] << endl;     // OR **mat
    cout << "1st row value *(mat+1)      : " << *mat[1] << endl;     // OR **(mat+1)
    cout << "2nd row value *(mat+2)      : " << *mat[2] << endl;     // OR **(mat+2)
}

void func2(int (*mat)[4], int n, int m) {
    // Same functionality as func()
    cout << "\n[func2] Printing values using pointer to array:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Row " << i << " address: " << (mat + i) << ", first value: " << *mat[i] << endl;
    }
}

int main() {
    int matrix[4][4] = {
        {1, 4, 7, 11},
        {2, 5, 8, 12},
        {3, 6, 9, 16},
        {10, 13, 14, 17}
    };

    func(matrix, 4, 4);
    func2(matrix, 4, 4);

    return 0;
}
