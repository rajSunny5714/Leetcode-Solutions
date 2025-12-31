// Create and use namespace

#include<iostream>
using namespace std;
namespace MySpace{
    int x=10;
}
int main(){
    cout<<MySpace::x;
    return 0;
}
