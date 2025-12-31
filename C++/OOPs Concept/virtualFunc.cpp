//  Virtual function example

#include<iostream>
using namespace std;
class Base{
public:
    virtual void display(){ cout<<"Base class"<<endl; }
};
class Derived : public Base{
public:
    void display(){ cout<<"Derived class"<<endl; }
};
int main(){
    Base *b;
    Derived d;
    b=&d;
    b->display();
    return 0;
}
