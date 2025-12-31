//  Interface-like behavior using abstract class

#include<iostream>
using namespace std;
class Printable{
public:
    virtual void print()=0;
};
class Document : public Printable{
public:
    void print(){ cout<<"Printing Document"; }
};
int main(){
    Document d;
    d.print();
    return 0;
}
