#include<iostream>
#include <cstring>
using namespace std;

void toUpper(char word[]){
    
    for(int i = 0; i<strlen(word); i++){
        char ch = word[i];
        if(ch >= 'A' && ch <= 'Z'){
            continue;
        }
        else{
            word[i] = ch - 'a' + 'A';
        }
    }
    cout<<word; 
}

int main()
{
    char  word[] = "ApPle";
    toUpper(word);

    return 0;
}