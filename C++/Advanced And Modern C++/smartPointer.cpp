// Smart pointer unique_ptr

#include<iostream>
#include<memory>
using namespace std;
int main(){
    unique_ptr<int> p(new int(10));
    cout<<*p;
    return 0;
}
