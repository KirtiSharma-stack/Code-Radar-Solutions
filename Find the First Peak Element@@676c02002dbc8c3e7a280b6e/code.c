// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
      
        scanf("%d\n",&arr[i]);
    }
    int max=arr[0];
    for (int j=0;j<n;j++){
        if (arr[j]>arr[0]){
            max=arr[i];
        }
    }
    printf("%d",max);
    return 0;

}