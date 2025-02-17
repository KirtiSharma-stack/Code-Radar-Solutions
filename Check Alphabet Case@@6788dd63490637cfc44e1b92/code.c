// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    char a[23];
    scanf("%s",&a);
    if  (a==strupr(a)){
        printf("Uppercase");
    }
    else{
        printf("Lowercase");
    }
    return 0;
}
