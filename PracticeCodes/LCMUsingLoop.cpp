#include <iostream>
using namespace std;

int main(){

    cin>>a>>b;

    int lcm =(a>b)? a:b;

    for(lcm%a==0 && lcm%b==0)
    {
            cout<<lcm;
            break;
    }

    return 0;
}