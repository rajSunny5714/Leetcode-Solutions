//  Object as function argument

#include<iostream>
using namespace std;
class Box{
public:
    int width;
    Box(int w){ width=w; }
};
void printWidth(Box b){ cout<<"Width: "<<b.width; }
int main(){
    Box b(10);
    printWidth(b);
    return 0;
}
