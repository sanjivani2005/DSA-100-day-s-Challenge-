#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter A Number :";
    cin>>n;
    int digitCount[10]={0};

    int temp =n;

    while(temp>0){
        int digit = temp %10;
        digitCount[digit]++;
        temp/=10;
    }

    long long result =0;
    for(int digit=9;digit>=0;digit--)
    {
        while(digitCount[digit]>0){
            result = result *10 + digit;
            digitCount[digit]--;
        }
    }

    return 0;
}