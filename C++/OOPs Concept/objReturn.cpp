//  Object return from function

#include<iostream>
using namespace std;
class Box{
public:
    int width;
    Box(int w=0){ width=w; }
};
Box createBox(int w){ return Box(w); }
int main(){
    Box b=createBox(10);
    cout<<"Width: "<<b.width;
    return 0;
}
