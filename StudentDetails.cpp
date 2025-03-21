#include <iostream>
#include <iomanip>
using namespace std;

class student{
    private:
    char name[10];
    int age;
    float percentage;
    public: 
    void getstudent(){
        cout<<"Enter the name of the student: ";
        cin>>name;
        cout<<"Enter the age of the student: ";
        cin>>age;
        cout<<"Enter the percentage of the student: ";
        cin>>percentage;
        }
        void displaystudent(){
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
            cout<<"Percentage: "<<percentage<<endl;
            }

    };

main(){
    student s1,s2;
    s1.getstudent();
    s1.displaystudent();
    s2.getstudent();
    s2.displaystudent();
    
}
