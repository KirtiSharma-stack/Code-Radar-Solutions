// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    int min=arr[n-1];
    for (int j=1;j<n;j++){
        
        if (arr[j]>max){
            max=arr[j];
        }
        if (arr[j]<min){
            min=arr[j];
        }
    // }
    // for (int j=1;j<n-1;j++){
    //     if (arr[j]>arr[0]){
    //         max=arr[j];
    //     }
    // }
    // for (int k=n-1;k<=1;k--){
    //     if (arr[k]<arr[n]){
    //         min=arr[k];
    //     }
    }
    printf("%d %d",min,max);
    return 0;
}