// Pointer dereferencing example

#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    int *ptr=&a;
    cout<<"Value using pointer: "<<*ptr;
    return 0;
}