//  Mutable keyword example

#include<iostream>
using namespace std;
class MyClass{
private:
    mutable int x;
public:
    MyClass(int a){ x=a; }
    void modify() const { x+=5; cout<<"x: "<<x; }
};
int main(){
    const MyClass obj(10);
    obj.modify();
    return 0;
}
