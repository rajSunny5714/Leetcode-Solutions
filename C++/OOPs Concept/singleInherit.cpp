//  Single inheritance

#include<iostream>
using namespace std;
class Base{
public:
    void displayBase(){ 
        cout<<"Base class function"<<endl; 
    }
};
class Derived : public Base{
public:
    void displayDerived(){ 
        cout<<"Derived class function"<<endl; 
    }
};
int main(){
    Derived d;
    d.displayBase();
    d.displayDerived();
    return 0;
}
