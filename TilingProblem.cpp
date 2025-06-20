#include <iostream>
using namespace std;

int tilingWays(int n) {
    if (n == 0 || n == 1)
        return 1;
    return tilingWays(n - 1) + tilingWays(n - 2);
}

int main() {
    int n;
    cout << "Enter value of n (2 x n floor): ";
    cin >> n;

    cout << "Number of ways to tile 2 x " << n << " floor is: " << tilingWays(n) << endl;
    return 0;
}
