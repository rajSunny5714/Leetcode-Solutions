// Count words in a file

#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream fin("data.txt");
    string word;
    int count=0;
    while(fin>>word){
        count++;
    }
    cout<<count;
    fin.close();
    return 0;
}
