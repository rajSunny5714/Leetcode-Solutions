//  Default constructor

#include<iostream>
using namespace std;
class MyClass{
public:
    MyClass(){
        cout<<"Default constructor called";
    }
};
int main(){
    MyClass obj;
    return 0;
}
