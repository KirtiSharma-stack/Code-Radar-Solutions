// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n)
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);                                   
    }
    int max=arr[0];
    for(int j=1;j<n;j++){
        if (arr[j]>max){
            max=arr[j];
        }
    
       int m=arr[i];
          for(int j=1;j<n;j++){
             if (m<arr[j]<max){
                 max=arr[j];
            }
        }
    }
    printf("%d",max);
    return 0;
}