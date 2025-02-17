// Your code here...
#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    switch (a){
        case'>=90':
        printf("A");
        break;
         case'>=80':case'<90':
        printf("B");
        break;
         case'>=70':case"<80":
        printf("C");
        break;
         case'>=60':case"<70":
        printf("D");
        break;
         case'<60':
        printf("F");
        break;

    }
    return 0;
}