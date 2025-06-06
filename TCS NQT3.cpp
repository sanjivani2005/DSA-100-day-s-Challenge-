// consider the following series 
//1,1,2,3,4,9,27,16,81,32,243,64,729,128,2187.....
// find the nth term

#include<iostream>
#include <math.h>
using namespace std;

int main(){
    int N;
    cin>>N;

    if(N%2==1){
        int term =(N+1)/2;
        int power = pow(3,term-1);
        cout<<power;
    }else{
        int term = N/2;
        int power = pow(3,term-1);
        cout<< power;
    }
}