#include <iostream>
using namespace std;

void toUpper(char word[], int n){

    for(int i=0;i<n;i++){
        char ch =word[i];
        if(ch>='A' && ch<='Z'){
            continue;
        }else{
            word[i]=ch-'a'+'A';
        }
    }

}

void toLower(char word[], int n) {
    for (int i = 0; i < n; i++) {
        char ch = word[i];
        if (ch >= 'a' && ch <= 'z') {
            continue; // already lowercase
        } else if (ch >= 'A' && ch <= 'Z') {
            word[i] = ch - 'A' + 'a'; // convert to lowercase
        }
    }
}


int main(){

    char word[] ="ApPle";
    toUpper(word, strlen(word));

    toLower(word,strlen(word));
    cout<<word<<endl;
    return 0;


}