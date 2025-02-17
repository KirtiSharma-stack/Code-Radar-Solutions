// Your code here...
#include <stdio.h>
#include <string.h>
int main(){
    char a[23];
    scanf("%s",&a);
    b=strupr(a);
    if  (a==b){
        printf("Uppercase");
    }
    else{
        printf("Lowercase");
    }
    return 0;
}
