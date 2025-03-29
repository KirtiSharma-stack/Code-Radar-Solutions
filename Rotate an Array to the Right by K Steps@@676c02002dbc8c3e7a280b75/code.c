// Your code here...
#include<stdio.h>
int main(){
   int n,l;
   scanf("%d",&n);
   int arr[n];
   for (int i=0;i<n;i++){
    scanf("%d ",&arr[i]);
   } 
   scanf("%d",&l);
   arr[l]=arr[1];
   printf("%d",arr[n]);
// //    for (int i=0;i<n;i++){
//       arr[l]=arr[i]
//    }
    

    return 0;
}