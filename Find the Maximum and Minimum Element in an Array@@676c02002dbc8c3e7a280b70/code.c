// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    for (int j=1;j<n;j=++){
        int max=arr[0];
        int min=arr[n];
        if (arr[j]>arr[0]){
            max=arr[j];
        }
        if (arr[j]<arr[n]){
            min=arr[j];
        }
    }
    printf("%d %d",min,max);
    return 0;
}