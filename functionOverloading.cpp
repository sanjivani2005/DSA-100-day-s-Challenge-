#include <iostream>
using namespace std;

class Print {
public:
    void show(int i) {
        cout << "Integer: " << i << endl;
    }

    void show(double d) {
        cout << "Double: " << d << endl;
    }

    void show(string s) {
        cout << "String: " << s << endl;
    }

    void show(int a, int b) {
        cout << "Sum of two integers: " << a + b << endl;
    }
};

int main() {
    Print p;

    p.show(10);           // Integer
    p.show(3.14);         // Double
    p.show("Sanjivani");  // String
    p.show(5, 7);         // Two integers

    return 0;
}
