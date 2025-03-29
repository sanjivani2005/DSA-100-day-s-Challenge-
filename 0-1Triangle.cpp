#include <iostream>
using namespace std;

int main(){

    int n =5;
    bool flag = true;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<flag<<" ";
            flag = !flag;
        }
        cout<<endl;
    }
}