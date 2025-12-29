#include <stdio.h>
int main() {
    char str[100],*p;
    scanf("%[^\n]",str);
    p=str;
    for(int i=0;*(p+i)!='\0';i++){
        printf("%c",*(p+i));
    }
    return 0;
}