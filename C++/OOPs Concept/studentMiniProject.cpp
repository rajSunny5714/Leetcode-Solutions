//  Mini OOP project - Student

#include<iostream>
using namespace std;
class Student{
private:
    string name;
    int marks;
public:
    Student(string n,int m){ name=n; marks=m; }
    void display(){ cout<<"Name: "<<name<<", Marks: "<<marks; }
};
int main(){
    Student s("Sunny",95);
    s.display();
    return 0;
}
