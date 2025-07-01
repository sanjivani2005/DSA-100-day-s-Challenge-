#include <iostream>
using namespace std;

int main()
{

   
      for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) { // 9 columns to show full symmetry
            if (j >= 6 - i && j <= 5) {
                cout << " * ";
            } else {
                cout << "   ";
            }
        }
        cout << endl;
    }

    return 0;
}