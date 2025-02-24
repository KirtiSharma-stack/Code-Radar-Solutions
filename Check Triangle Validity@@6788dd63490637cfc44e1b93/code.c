// Your code here...
#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    d=sqrt(a*a+b*b);
    if (c==d){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
    return 0;
}