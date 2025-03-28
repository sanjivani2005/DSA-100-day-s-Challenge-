#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<" Enter No. ";
    cin>>n;
    int first=0;
    int second=1;
    cout<<first<<",  "<<second<<",  ";

    for(int i=0;i<n-2;i++){ 
        int third=first+second;
        cout<<third<<",  ";
        first =second;
        second=third;
    }

    cout<<"\n ";

    return 0;
}