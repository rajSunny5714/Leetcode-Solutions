//  Access class members

#include<iostream>
using namespace std;
class Person{
public:
    string name;
    int age;
};
int main(){
    Person p;
    p.name="Sunny";
    p.age=25;
    cout<<"Name: "<<p.name<<endl;
    cout<<"Age: "<<p.age;
    return 0;
}
