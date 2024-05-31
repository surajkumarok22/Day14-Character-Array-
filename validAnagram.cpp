#include<iostream>
#include<cstring>
using namespace std;

bool isAnagram(string str1, string str2){
    if(str1.length() != str2.length()){
        cout<<"not valid anagram";
        return false;
    }

    int count[26] = {0};
    for(int i = 0; i<str1.length(); i++){
        int idx = str1[i] - 'a';
        count[idx]++;
    }

    for(int i = 0; i<str2.length(); i++){
        int idx = str2[idx] - 'a';
        if(count[idx] == 0){
            cout<<" not a anagrams \n";
            return false;
        }
        count[idx]--;
    }
    cout<< "valid anagrams \n";
    return true;
}

int main()
{
  string name1 = "abcsed";
  string name2 = "bcdsae";

 cout<< isAnagram(name1, name2);
    
    return 0;
}