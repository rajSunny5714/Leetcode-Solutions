// Append data to a file

#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream fout("data.txt",ios::app);
    fout<<" Appended Text";
    fout.close();
    return 0;
}
