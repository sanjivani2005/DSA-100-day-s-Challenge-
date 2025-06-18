#include <iostream>
#include <string>

using namespace std;

class Car {  // ✅ corrected 'Class' to 'class'
    string name;
    string color;

public:

Car(){ //non parameterize constructor
    cout<<" Constructor is called ...object being created \n";
}
    Car(string nameValue, string colorValue) { // Constructor
        cout << "Constructor is called..object is been created.\n";
        this->name =nameValue;
        *this.color = colorValue;

        //parameterize constructor
    }

    void start() {
        cout << "Car has started...\n";
    }

    void stop() {
        cout << "Car has stopped...\n";
    }

    //getter
    string getName(){
        return name;
    }
};

int main() {
    Car c0;
    Car c1("maruti 800","Black");
    cout<<"car name : "<<c1.getName()<<endl;
    c1.start();  // Optional: Demonstrate usage
    c1.stop();   // Optional: Demonstrate usage
    return 0;
}
