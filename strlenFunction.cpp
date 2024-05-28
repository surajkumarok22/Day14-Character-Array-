#include<iostream>
#include <cstring>
using namespace std;

int main()
{
        // strlen() function return lenght of string or char array before using this function intilize #include <cstring> this header file


    char array[50] = {'a','b','c','d','e','f','g','h','i','\0'}; //9

    cout<<strlen(array)<<endl;

    char name[] = "suraj kumar";// 11
    cout<<strlen(name)<<endl;


    return 0;
}