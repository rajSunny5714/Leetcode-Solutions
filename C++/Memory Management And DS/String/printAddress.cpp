// Print address of a variable

#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    cout<<"Address of variable: "<<&a;
    return 0;
}