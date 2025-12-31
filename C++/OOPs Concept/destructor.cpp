//  Destructor example

#include<iostream>
using namespace std;
class MyClass{
public:
    ~MyClass(){ 
        cout<<"Destructor called"; 
    }
};
int main(){
    MyClass obj;
    return 0;
}
