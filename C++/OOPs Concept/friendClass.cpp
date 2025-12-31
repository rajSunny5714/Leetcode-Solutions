//  Friend class

#include<iostream>
using namespace std;
class Box;
class Print{
public:
    void display(Box b);
};
class Box{
private:
    int width;
public:
    Box(int w){ width=w; }
    friend class Print;
};
void Print::display(Box b){ cout<<"Width: "<<b.width; }
int main(){
    Box b(10);
    Print p;
    p.display(b);
    return 0;
}
