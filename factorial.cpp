#include<iostream>
using namespace std;

int main(){

    int n ;
    cout<<" Enter a number :";
    cin>>n ;

    int fact=1;

    for(int i=1;i<=n;i++)
    {
        fact= fact*i;
    }

    cout<<" \n Factorial of "<<n<<" is "<<fact;
}