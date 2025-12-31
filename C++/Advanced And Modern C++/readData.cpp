// Read data from a file

#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream fin("data.txt");
    string s;
    getline(fin,s);
    cout<<s;
    fin.close();
    return 0;
}
