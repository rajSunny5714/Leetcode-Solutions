//  Nested classes

#include<iostream>
using namespace std;
class Outer{
public:
    class Inner{
    public:
        void display(){ cout<<"Inside Inner class"; }
    };
};
int main(){
    Outer::Inner obj;
    obj.display();
    return 0;
}
