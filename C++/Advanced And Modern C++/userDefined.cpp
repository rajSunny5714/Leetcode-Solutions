// User-defined exception

#include<iostream>
using namespace std;
class MyException{};
int main(){
    try{
        throw MyException();
    }catch(MyException e){
        cout<<"User defined exception";
    }
    return 0;
}
