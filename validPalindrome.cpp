#include<iostream>
#include<cstring>
using namespace std;


bool palindrome(char array[]){
    int n = strlen(array);
    int srt = 0 , end = n-1;
    while(srt<end){
        if(array[srt] != array[end]){
            cout<<"not a valid palindrome"<<endl;
            return false;
        }
        else{
            srt++;
        end--;
        }
        
    }
    cout<<"valid palindrome"<<endl;
    return true;
  
}

int main()
{
    char word[30];
    cout<<"type here: ";
    cin.getline(word,30);

    palindrome(word);
 
    
    return 0;
}