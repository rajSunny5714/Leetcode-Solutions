// Producer-consumer using multithreading

#include<iostream>
#include<thread>
#include<mutex>
using namespace std;
int data=0;
mutex m;
void producer(){
    m.lock();
    data=10;
    cout<<"Produced"<<endl;
    m.unlock();
}
void consumer(){
    m.lock();
    cout<<"Consumed "<<data<<endl;
    m.unlock();
}
int main(){
    thread t1(producer);
    thread t2(consumer);
    t1.join();
    t2.join();
    return 0;
}
