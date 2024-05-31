#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char word[30];
    cin.getline(word,30);

    cout<<"your word was: "<<word<<endl;
    cout<<"your word length is: "<<strlen(word)<<endl;
    
    return 0;
}