//  Use of this pointer

#include<iostream>
using namespace std;
class MyClass{
private:
    int x;
public:
    void setX(int x){ this->x=x; }
    int getX(){ return x; }
};
int main(){
    MyClass obj;
    obj.setX(10);
    cout<<"x: "<<obj.getX();
    return 0;
}
