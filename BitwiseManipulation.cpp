#include <iostream>
using namespace std;

// Function to check if the ith bit is set
bool checkBit(int num, int i) {
    return (num & (1 << i)) != 0;
}

// Function to set the ith bit
int setBit(int num, int i) {
    return num | (1 << i);
}

// Function to clear the ith bit
int clearBit(int num, int i) {
    return num & ~(1 << i);
}

// Function to toggle the ith bit
int toggleBit(int num, int i) {
    return num ^ (1 << i);
}

int main() {
    int num = 10;  // Binary: 1010
    int i = 1;     // Bit position (0-based indexing)

    cout << "Original number: " << num << endl;

    // Check if ith bit is set
    cout << "Is bit " << i << " set? " << (checkBit(num, i) ? "Yes" : "No") << endl;

    // Set the ith bit
    num = setBit(num, i);
    cout << "After setting bit " << i << ": " << num << endl;

    // Clear the ith bit
    num = clearBit(num, i);
    cout << "After clearing bit " << i << ": " << num << endl;

    // Toggle the ith bit
    num = toggleBit(num, i);
    cout << "After toggling bit " << i << ": " << num << endl;

    return 0;
}
