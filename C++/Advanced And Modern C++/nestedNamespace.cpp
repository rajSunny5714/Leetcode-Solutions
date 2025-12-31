// Nested namespace example

#include<iostream>
using namespace std;
namespace A{
    namespace B{
        int x=20;
    }
}
int main(){
    cout<<A::B::x;
    return 0;
}
