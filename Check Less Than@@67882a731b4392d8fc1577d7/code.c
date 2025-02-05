#include <stdio.h>


int main() {
    int a,s;
    scanf("%d %d",&a,&s);
    if (a>s){
        printf("False\n");
    }
    if (a==s){
        printf("False\n");
    }
    else{
        printf("True\n");
    }
    return 0;
}