// Copy file contents

#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream fin("data.txt");
    ofstream fout("copy.txt");
    string s;
    while(getline(fin,s)){
        fout<<s<<endl;
    }
    fin.close();
    fout.close();
    return 0;
}
