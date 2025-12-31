// Multiple catch blocks

#include<iostream>
using namespace std;
int main(){
    try{
        throw 'A';
    }catch(int e){
        cout<<"Integer exception";
    }catch(char c){
        cout<<"Character exception";
    }
    return 0;
}
