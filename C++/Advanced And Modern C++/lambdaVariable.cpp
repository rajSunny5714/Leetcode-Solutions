// Capture variables in lambda

#include<iostream>
using namespace std;
int main(){
    int x=10;
    auto f=[x](){
        cout<<x;
    };
    f();
    return 0;
}
