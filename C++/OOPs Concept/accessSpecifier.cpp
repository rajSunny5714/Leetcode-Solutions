//  Access specifiers in inheritance

#include<iostream>
using namespace std;
class Base{
public:
    int x;
protected:
    int y;
private:
    int z;
};
class Derived : public Base{
public:
    void display(){
        x=10; 
        y=20; 
        // z=30; // Not accessible
        cout<<"x: "<<x<<" y: "<<y<<endl;
    }
};
int main(){
    Derived d;
    d.display();
    return 0;
}
