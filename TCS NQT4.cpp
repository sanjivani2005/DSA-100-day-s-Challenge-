// A string consist of the combination of letters , numbers and characters
//you have to focus on # and * symbol and print the output as per the cases 

//if No. of * > # , greater
//if No. of * < # , smaller
// if No. of *=#  , equal

#include <bits/stdc++.h>
using namespace std;

int main(){

    string str;
    int count1=0;
    int count2=0;
    cin>>str;

    for (int i=0; i<str.length();i++)
    {
        if(str[i]=='*')
        {
            count1++;
        }
        if(str[i]=='#')
        {
            count2++;
        }
    }
    if(count1>count2)
    {
        cout<<" Greater ";
    }else if(count1<count2)
    {
        cout<<"Smaller";
    }else{
        cout<<"equal ";
    }



}