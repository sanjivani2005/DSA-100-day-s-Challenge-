#include <iostream>
using namespace std;

class Student {
//if access modifier is not mention then by default its private
    //Properties
    private:
    string name;
     float cgpa;

    public: //Methods
    void getPercentage(){
        cout<<(cgpa * 10)<<" % \n";
    }

    //Setters
    void setName(string n){
    name =n;
    }
    void setCpga(float cgpaval){
        cgpa = cgpaval;
    }

    //getters
    string getName(){
        return name;
    }
    float getCgpa(){
        return cgpa;
    }

};

class User{
    int id;
    string username;
    string password;
    string bio;

    void deactivate(){
        cout<<" Deleting account \n";
    }

    void editBio(string newBio){
        bio = newBio;
    }
};

int main(){

    Student s1; //object of Student class

    //s1.name= " sanjivani";  can not be accessible due to private
    s1.cgpa = 9.5;
    s1.getPercentage();
    cout<<s1.cgpa<<endl;

    Student s2; //object of Student class
    cout<<sizeof(s1)<<endl;

    s1.setName(" Mohini");
    s1.setCpga(9.9);
    cout<<s1.getName()<<endl;
    cout<<s1.getCgpa()<<endl;
    return 0;

}