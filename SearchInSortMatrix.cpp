#include <iostream>
using namespace std;

//bruthe force approach
bool searchInMatrix(int matrix[][4], int rows, int cols, int key) {
    for (int i = 0; i < rows; ++i) {           // Traverse each row
        for (int j = 0; j < cols; ++j) {       // Traverse each column
            if (matrix[i][j] == key) {
                cout << "Element found at position: (" << i << ", " << j << ")" << endl;
                return true;
            }
        }
    }
    cout << "Element not found in matrix." << endl;
    return false;
}

bool search(int mat[][4],int n,int m, int key){
    int i=0,j=m-1;
    while(i<n&&j>=0){
        if(mat[i][j]==key){
            cout<<"found at cell ("<<i<<","<<j<<")\n";
            return true;
        }else if(mat[i][j]>key){
            //left
            j--;
        }else{
            //down
            i++;
        }
    }
    return false;
}

int main() {
    int matrix[4][4] = {
        {1, 4, 7, 11},
        {2, 5, 8, 12},
        {3, 6, 9, 16},
        {10, 13, 14, 17}
    };

    int key = 9;
    searchInMatrix(matrix, 4, 4, key);
search(matrix,4,4,key);
    return 0;
}
