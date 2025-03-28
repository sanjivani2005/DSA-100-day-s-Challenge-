#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << " Enter any number :";
    cin >> n;
   

    for (int i = 2; i <= n; i++)
    {

        int curr = i;
        bool isPrime = true;
        for (int j = 2; j*j <= i; j++)
        {

            if (curr % j == 0)
            {
                isPrime = false;
            }
        }
        if (isPrime == true)
        {
            cout << curr << " ";
        }
       
    }
    cout << endl;
    return 0;
}