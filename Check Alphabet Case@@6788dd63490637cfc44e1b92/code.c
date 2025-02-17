// Your code here...
#include <stdio.h>
 #include <ctype.h>
int main(){
    char a;
    scanf("%c",&a);
    // char b[]=strupr(a);
    if  (isupper(a)){
        printf("Uppercase");
    }
    else{
        printf("Lowercase");
    }
    return 0;
}
