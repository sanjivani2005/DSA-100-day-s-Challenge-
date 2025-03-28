#include<iostream>
using namespace std;

int main(){
    int n;

    do{
        cout<<" Enter number :";
        cin>>n;
        if(n%10==0){
            break;
        }
    }while(true);

        return 0;
    }