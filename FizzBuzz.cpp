#include<iostream>
using namespace std;

int main(){

    int n=30;

    int fizz=0,buzz=0;
    for(int i=1;i<=n;i++)
    {
        fizz++; buzz++;
        if(fizz==3 && buzz==5)
                {
                    cout<<"FizzBuzz"<<endl;
                    fizz=0;
                    buzz=0;
                    }
                    else if(fizz==3)
                    {
                        cout<<"Fizz"<<endl;
                        fizz=0;
                        }
            else if(buzz==5)
            {
                cout<<"Buzz"<<endl;
                buzz=0;
                }
               
                    else
                    {
                        cout<<i<<endl;
                        }
                        }

                        return 0;
}