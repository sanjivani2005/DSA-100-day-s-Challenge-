#include <iostream>
using namespace std;

class Complex {
    float real;
    float imag;

public:
    // Constructor
    Complex(float r = 0, float i = 0) {
        real = r;
        imag = i;
    }

    // Overloading + operator
    Complex operator + (const Complex& obj) {
        Complex result;
        result.real = real + obj.real;
        result.imag = imag + obj.imag;
        return result;
    }

    // Display function
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(2.5, 3.5);
    Complex c2(1.5, 4.5);
    Complex sum = c1 + c2;  // Calls overloaded + operator

    cout << "Sum of complex numbers: ";
    sum.display();

    return 0;
}
