#include<iostream>
#include<string>
using namespace std;

int main()
{
    char word[10];
    cin>>word;
    cout<<word<<endl; // do not take value input after space 


    char sentence[50];
    cin.getline(sentence,50); // this function will take value input after space
    cout<<sentence<<endl;

    return 0;
}