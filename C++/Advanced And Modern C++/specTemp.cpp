// Template specialization

#include<iostream>
using namespace std;
template<class T>
class Print{
public:
    void show(T x){
        cout<<x;
    }
};
template<>
class Print<char>{
public:
    void show(char x){
        cout<<"Character: "<<x;
    }
};
int main(){
    Print<int> p1;
    Print<char> p2;
    p1.show(10);
    p2.show('A');
    return 0;
}
