// Your code here...
#include <stdio.h>
int main(){
char a[23];
scanf("%s",&a);
if  a==strupr(a){
    printf("Uppercase");
}
else{
    printf("Lowercase");
}
return 0;
}
