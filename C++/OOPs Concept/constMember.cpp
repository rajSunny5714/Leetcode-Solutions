//  Constant member functions

#include<iostream>
using namespace std;
class MyClass{
private:
    int x;
public:
    MyClass(int a){ x=a; }
    void display() const { cout<<"Value: "<<x; }
};
int main(){
    MyClass obj(10);
    obj.display();
    return 0;
}
