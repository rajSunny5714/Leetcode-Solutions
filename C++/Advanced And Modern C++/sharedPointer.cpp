// Shared pointer example

#include<iostream>
#include<memory>
using namespace std;
int main(){
    shared_ptr<int> p1(new int(20));
    shared_ptr<int> p2=p1;
    cout<<*p2;
    return 0;
}
