// Merge two arrays

#include<iostream>
using namespace std;
int main(){
    int arr1[3]={1,2,3},arr2[2]={4,5},arr3[5];
    for(int i=0;i<3;i++) arr3[i]=arr1[i];
    for(int i=0;i<2;i++) arr3[3+i]=arr2[i];
    for(int i=0;i<5;i++) cout<<arr3[i]<<" ";
    return 0;
}
