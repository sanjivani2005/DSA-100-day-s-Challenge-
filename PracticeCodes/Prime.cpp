#include <iostream>
using namespace std;

int PrimeNo(int d){
    int count = 0;
     if(d==3||d==5||d==7){
            count++;
         }
         return count;
}
int main(){

    int n;
    cout << "Enter a number: ";
    cin >> n;

    int temp = n;
    int count=0;

    while (temp > 0) {
        int d = temp % 10;
        temp = temp / 10;
       count = PrimeNo(d);
    }

    cout<<endl<<"Prime Digit count are : "<<count;

    return 0;
   
}