//  Define a class and object

#include<iostream>
using namespace std;
class MyClass{
public:
    void display(){ 
        cout<<"Hello, I am a class function"; 
    }
};
int main(){
    MyClass obj;
    obj.display();
    return 0;
}
