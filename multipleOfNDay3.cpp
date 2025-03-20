#include<iostream>
using namespace std;

int main(){

    int limit;
    int i ;
    int j=1;

    cout<<" Write the number of which you need multiple :"<<endl;
    cin>>i;

    cout<<" Upto what limit you need range  :"<<endl;
    cin>>limit;

    while(j<=limit){
        if(j%i==0){
            cout<<j<<" ";
        }
        j=j+1;
    }

    return 0;
}
