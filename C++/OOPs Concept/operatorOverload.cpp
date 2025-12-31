//  Operator overloading (+)

#include<iostream>
using namespace std;
class Number{
public:
    int x;
    Number(int a=0){ x=a; }
    Number operator+(Number const &obj){
        Number res;
        res.x=x+obj.x;
        return res;
    }
};
int main(){
    Number n1(5),n2(10);
    Number n3=n1+n2;
    cout<<"Sum: "<<n3.x;
    return 0;
}
