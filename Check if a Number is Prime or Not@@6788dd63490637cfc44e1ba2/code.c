// Your code here...
#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for (int i=2;i<a;i++){
        if (a%i!=0){
            printf("Prime");
        }
        // break;
        else{
            printf("Not Prime");
        }
    }
   
    return 0;
}