//  Multilevel inheritance

#include<iostream>
using namespace std;
class Base{
public:
    void showBase(){ 
        cout<<"Base class"<<endl; 
    }
};
class Derived1 : public Base{
public:
    void showDerived1(){ 
        cout<<"Derived1 class"<<endl; 
    }
};
class Derived2 : public Derived1{
public:
    void showDerived2(){ 
        cout<<"Derived2 class"<<endl; 
    }
};
int main(){
    Derived2 d;
    d.showBase();
    d.showDerived1();
    d.showDerived2();
    return 0;
}
