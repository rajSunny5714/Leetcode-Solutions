// Multithreading using thread

#include<iostream>
#include<thread>

void show(){
    std::cout<<"Thread running";
}

int main(){
    std::thread t(show);
    t.join();
    return 0;
}
