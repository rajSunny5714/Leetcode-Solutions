// Lambda expression example

#include<iostream>
using namespace std;
int main(){
    auto sum=[](int a,int b){
        return a+b;
    };
    cout<<sum(10,20);
    return 0;
}
