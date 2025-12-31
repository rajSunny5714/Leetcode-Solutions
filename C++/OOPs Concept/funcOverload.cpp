//  Function overloading example

#include<iostream>
using namespace std;
int add(int a,int b){ return a+b; }
double add(double a,double b){ return a+b; }
int main(){
    cout<<"Sum of integers: "<<add(2,3)<<endl;
    cout<<"Sum of doubles: "<<add(2.5,3.5);
    return 0;
}
