// Mutex and lock example

#include<iostream>
#include<thread>
#include<mutex>
using namespace std;
mutex m;
void display(){
    m.lock();
    cout<<"Critical section"<<endl;
    m.unlock();
}
int main(){
    thread t1(display);
    thread t2(display);
    t1.join();
    t2.join();
    return 0;
}
