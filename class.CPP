#include <iostream>
using namespace std;

class Student {

    //Properties
    private:
    string name;

    public:
    float cgpa;

    //Methods
    void getPercentage(){
        cout<<(cgpa * 10)<<" % \n";
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
    return 0;

}