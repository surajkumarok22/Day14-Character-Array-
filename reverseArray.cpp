#include<iostream>
#include<cstring>
using namespace std;

void reverse(char array[], int n){
    int st = 0, end = n-1;
    while(st<end){
        swap(array[st],array[end]);
        st++;
        end--;
    }
    cout<<"Reverse is: "<<array;
}

int main()
{
    char name[50];
    cout<<"Enter Your name: "<<endl;
    cin.getline(name,50);
    reverse(name, strlen(name));
    
    return 0;
}