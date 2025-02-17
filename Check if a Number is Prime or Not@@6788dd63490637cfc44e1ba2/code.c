// Your code here...
#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int count=0;
    for (int i=2;i<a;i++){
        if (a%i==0){
           count+=1;
        }
    }
    if (count>0){
        printf("Not Prime");
    }
    else{
        printf("Prime");
    }
   
    return 0;
}