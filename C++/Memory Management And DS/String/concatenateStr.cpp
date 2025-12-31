// Concatenate two strings

#include<iostream>
using namespace std;
int main(){
    string s1,s2;
    cout<<"Enter first string: ";
    getline(cin,s1);
    cout<<"Enter second string: ";
    getline(cin,s2);
    string s3=s1+s2;
    cout<<"Concatenated string: "<<s3;
    return 0;
}