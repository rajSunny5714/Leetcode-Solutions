// Move constructor example

#include<iostream>
using namespace std;
class Test{
public:
    Test(){}
    Test(Test&& t){
        cout<<"Move constructor";
    }
};
int main(){
    Test t1;
    Test t2=move(t1);
    return 0;
}
