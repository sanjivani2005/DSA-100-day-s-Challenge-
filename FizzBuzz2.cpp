#include <iostream>
using namespace std;

int main(){
    int n=1000;
    int fizz=0;
    int buzz=0;
    for(int i=1;i<=n;i++){
        fizz++; buzz++;
        if(i%3==0 && i%5==0){
            cout << "FizzBuzz" << endl;
        }else if(i%3==0){
            cout << "Fizz" << endl;
        }else if(i%5==0){
            cout << "Buzz" << endl;
        }else{
            cout << i << endl;
        }
    }
    return 0;
}