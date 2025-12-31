//  Mini OOP project - Bank Account

#include<iostream>
using namespace std;
class Bank{
private:
    string name;
    double balance;
public:
    Bank(string n,double b){ name=n; balance=b; }
    void deposit(double amt){ balance+=amt; }
    void withdraw(double amt){ if(amt<=balance) balance-=amt; else cout<<"Insufficient balance"; }
    void display(){ cout<<"Name: "<<name<<", Balance: "<<balance; }
};
int main(){
    Bank b("Sunny",1000);
    b.deposit(500);
    b.withdraw(300);
    b.display();
    return 0;
}
