// Swap two numbers using pointers

#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    int *p=&a,*q=&b;
    int temp=*p;
    *p=*q;
    *q=temp;
    cout<<"After swapping: "<<a<<" "<<b;
    return 0;
}