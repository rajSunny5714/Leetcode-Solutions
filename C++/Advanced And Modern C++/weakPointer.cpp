// Weak pointer example

#include<iostream>
#include<memory>
using namespace std;
int main(){
    shared_ptr<int> sp(new int(30));
    weak_ptr<int> wp=sp;
    cout<<*sp;
    return 0;
}
