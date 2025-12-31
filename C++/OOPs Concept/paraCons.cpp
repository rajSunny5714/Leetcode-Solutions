//  Parameterized constructor

#include<iostream>
using namespace std;
class MyClass{
public:
    MyClass(int x){ 
        cout<<"Value: "<<x; 
    }
};
int main(){
    MyClass obj(10);
    return 0;
}
