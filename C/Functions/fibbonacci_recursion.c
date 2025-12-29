#include <stdio.h>
void fib(int n,int a,int b){
    if(n==0) return;
    printf("%d ",a);
    fib(n-1,b,a+b);
}
int main() {
    int n;
    scanf("%d",&n);
    fib(n,0,1);
    return 0;
}