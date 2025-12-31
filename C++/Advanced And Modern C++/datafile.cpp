// Write data to a file

#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream fout("data.txt");
    fout<<"Hello File";
    fout.close();
    return 0;
}
