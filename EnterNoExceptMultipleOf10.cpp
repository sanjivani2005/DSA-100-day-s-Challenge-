#include<iostream>
using namespace std;

int main(){
    int n;

    do{
        cout<<" Enter number :";
        cin>>n;
        if(n%10==0){
            continue;
        }
        cout<<" Number is not multiple of 10"<<endl;
    }while(true);

        return 0;
    }