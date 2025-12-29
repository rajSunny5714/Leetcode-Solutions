#include <stdio.h>
int main() {
    int arr[5],*p;
    for(int i=0;i<5;i++) {
        scanf("%d",&arr[i]);
    }
    p=arr;
    for(int i=0;i<5;i++){
        printf("%d ",*(p+i));
    }
    return 0;
}