// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    char a[23];
    scanf("%s",&a);
    char b[23]=strupr(a);
    if  (a==b){
        printf("Uppercase");
    }
    else{
        printf("Lowercase");
    }
    return 0;
}
