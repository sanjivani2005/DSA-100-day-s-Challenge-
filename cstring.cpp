#include <iostream>
#include  <cstring>
using namespace std;

int main(){
    char str1[100];
    char str2[100]="Sanjivani Shende";

    strcpy(str1,str2);
    cout<<str1<<endl;

    char st1[199]="abc";
    char st2[288]="sad";

    strcat(st1,st2);
    cout<<st1<<endl;
    cout<<st2<<endl;

    cout<<strcmp(st1,st2)<<endl;
    return 0;

}