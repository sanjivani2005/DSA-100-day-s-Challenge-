
#include <iostream>
#include <string>
using namespace std;

class Car{
    public:
    string name;
    string color;

    Car(string name,string color){
        this->name = name;
        this->color=color;
    }

    Car(Car &original){
        cout<<" Copy constructor called"<<endl;
        name=original.name;
        color=original.color;
    }

    //destructor
    ~Car(){
        cout<<"deleting object...";
        delete name;
        delete color;
        name=NULL;
        color=NULL;
        }
};

int main(){

    Car c1("maruti ","white");

    Car c2(c1);
    cout<<c2.name<<endl;
    cout<<c2.color<<endl;
   
    return 0;
}