#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<" Enter any no :";
    cin>>n;
    int CubeSum =0;

    while (n>0)
    {
        int lastDigit = n %10;
        CubeSum = CubeSum + (lastDigit * lastDigit * lastDigit);
        n=n/10;
    }
    
if(n==CubeSum) {
    cout<< " Armstrong number \n ";
}else{
    cout<<" Not a Armstrong number \n ";
}
return 0;
}