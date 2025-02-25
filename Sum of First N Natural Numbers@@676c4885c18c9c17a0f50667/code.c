// Your code here...
#include<stdio.h>
int main(){
   int n;
   int d=0;
   scanf("%d",&n);
   for (int i=1;i<=n;i++){
     d+=i;
   } 
   printf("%d",d);
   return 0;
}