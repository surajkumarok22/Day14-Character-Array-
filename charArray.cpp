#include<iostream>
using namespace std;

int main()
{
    char arr[5] = {'a', 'b', 'f', 'e','\0'};
    cout<< arr<< endl; // address print 

    char arr2[] = "hello world";
    cout<<arr2<<endl;
    cout<<arr2[0]<<endl;
    cout<<arr2[1]<<endl;
    cout<<arr2[2]<<endl;
    cout<<arr2[3]<<endl;
    cout<<arr2[4]<<endl;

    char arr3[10];

    // arr3 = "apna college";  we can't do this 

    char work[] = "code";
    cout<<work<<endl;

    // char work2[4] = "code";   initializer-string for array of chars is too long
    // cout<<work2<<endl;

    char work3[5] = "code";
    cout<<work3<<endl;


    

    return 0;
}