// Basic try-catch example

#include<iostream>
using namespace std;
int main(){
    try{
        throw 10;
    }catch(int e){
        cout<<"Exception caught";
    }
    return 0;
}
