#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<" Enter a number :" ;
    cin>>n;
    bool isPrime = true;

    for(int x=2;x<=n-1;x++){
        if(n%x==0){
            isPrime = false;
            break;
        }
    }
    if(isPrime == true){
        cout<<n<<" is a prime no"<<endl;
    }else{
        cout<<n<<" is not a prime no"<<endl;
    }
    return 0;
}