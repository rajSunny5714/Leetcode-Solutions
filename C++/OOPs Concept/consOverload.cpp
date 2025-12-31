//  Constructor overloading

#include<iostream>
using namespace std;
class MyClass{
public:
    MyClass(){ 
        cout<<"Default constructor"; 
    }
    MyClass(int x){ 
        cout<<"Parameterized constructor: "<<x; 
    }
};
int main(){
    MyClass obj1;
    MyClass obj2(10);
    return 0;
}
