//  Copy constructor

#include<iostream>
using namespace std;
class MyClass{
public:
    int x;
    MyClass(int a){ 
        x=a; 
    }
    MyClass(const MyClass &obj){
        x=obj.x; 
    }
};
int main(){
    MyClass obj1(10);
    MyClass obj2=obj1;
    cout<<"obj2.x: "<<obj2.x;
    return 0;
}
