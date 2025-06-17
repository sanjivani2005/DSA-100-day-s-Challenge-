

#include <iostream>
#include <string>
using namespace std;

int main(){
    string str = " Sanjivani ";
    for(char ch :str){

        cout<<ch<<",";
    }
    cout<<endl;

    cout<<str.substr(1,5)<<endl;

    cout<<str.find("jivani")<<endl;
    return 0;
}