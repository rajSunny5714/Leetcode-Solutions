//  Multiple inheritance

#include<iostream>
using namespace std;
class Base1{
public:
    void show1(){ 
        cout<<"Base1 class"<<endl; 
    }
};
class Base2{
public:
    void show2(){ 
        cout<<"Base2 class"<<endl; 
    }
};
class Derived : public Base1, public Base2{};
int main(){
    Derived d;
    d.show1();
    d.show2();
    return 0;
}
