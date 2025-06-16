#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char work[50]={'h','e','l','l','o','\0'};
    cout<<strlen(work)<<endl;
    
    char str[30];
    cin>>str; //ignore whitespaces and after the space 
    cout<<" your word was :"<<str<<endl;
     cout<<" Length :"<<strlen(str)<<endl;


     char sentence[30];
     cin.getline(sentence,30); //third argument is demlimiter 

     cout<<"Your word was :"<<sentence<<endl;
     cout<<" Length :"<<strlen(sentence)<<endl;
    return 0;

}