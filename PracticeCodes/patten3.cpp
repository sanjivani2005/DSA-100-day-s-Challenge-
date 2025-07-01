#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n == 2 || n == 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

int main()
{
    int r;
    cout << "No. of Rows: ";
    cin >> r;

    int p = 2;
    for (int i = 0; i < r; i++)  // changed <= to <
    {
        for (int j = 0; j <= i; j++)
        {
            while (!isPrime(p))
                p++;

            cout << p << "  ";
            p++;
        }
        cout << endl;
    }

    return 0;
}
