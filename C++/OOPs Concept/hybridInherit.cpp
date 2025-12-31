//  Hybrid inheritance

#include<iostream>
using namespace std;
class Base{
public:
    void showBase(){ cout<<"Base class"<<endl; }
};
class Derived1 : public Base{
public:
    void showDerived1(){ cout<<"Derived1 class"<<endl; }
};
class Derived2 : public Base{
public:
    void showDerived2(){ cout<<"Derived2 class"<<endl; }
};
class Hybrid : public Derived1, public Derived2{};
int main(){
    Hybrid h;
    h.Derived1::showBase();
    h.showDerived1();
    h.showDerived2();
    return 0;
}
