#include <iostream>
#include <string>
using namespace std;

class User{
    private : int id;
    string password;

    public:
    string username;

    User(int id){
        this->id=id;
    }

    //Getter
    string getPassword(){
        return password;
    }

    //setter
    void setPassword(string password){
        this->password=password;
    }
};

int main(){

    User user1(101);
    user1.username= "sanjivani";
    user1.setPassword("password123");

    cout<<"Username : "<<user1.username<<endl;
    cout<<"Password : "<<user1.getPassword()<<endl;
    return 0;
}