//  Mini OOP project - Library

#include<iostream>
using namespace std;
class Book{
private:
    string title;
    string author;
public:
    Book(string t,string a){ title=t; author=a; }
    void display(){ cout<<"Title: "<<title<<", Author: "<<author; }
};
int main(){
    Book b("C++ Programming","Sunny");
    b.display();
    return 0;
}
