// Binary search in array

#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5},key,l=0,r=4,mid;
    cout<<"Enter element to search: ";
    cin>>key;
    int pos=-1;
    while(l<=r){
        mid=l+(r-l)/2;
        if(arr[mid]==key){ pos=mid; break; }
        else if(arr[mid]<key) l=mid+1;
        else r=mid-1;
    }
    if(pos!=-1) cout<<"Element found at index "<<pos;
    else cout<<"Element not found";
    return 0;
}
