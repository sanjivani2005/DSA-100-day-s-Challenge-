#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int binaryToDecimal(string binary) {
    int decimal = 0;
    int power = 0;

    // Start from the rightmost bit (LSB)
    for(int i = binary.length() - 1; i >= 0; i--) {
        if(binary[i] == '1') {
            decimal += pow(2, power);
        }
        power++;
    }

    return decimal;
}

int main() {
    string binary;
    cout << "Enter a binary number: ";
    cin >> binary;

    int result = binaryToDecimal(binary);
    cout << "Decimal equivalent: " << result << endl;

    return 0;
}
