// Search element using linear search

#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5},key;
    cout<<"Enter element to search: ";
    cin>>key;
    int pos=-1;
    for(int i=0;i<5;i++){
        if(arr[i]==key){ pos=i; break; }
    }
    if(pos!=-1) cout<<"Element found at index "<<pos;
    else cout<<"Element not found";
    return 0;
}
