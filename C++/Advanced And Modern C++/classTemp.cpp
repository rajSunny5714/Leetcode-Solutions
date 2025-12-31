// Class template example

#include<iostream>
using namespace std;
template<class T>
class Box{
    T value;
public:
    Box(T v){
        value=v;
    }
    void display(){
        cout<<value;
    }
};
int main(){
    Box<int> b(10);
    b.display();
    return 0;
}
