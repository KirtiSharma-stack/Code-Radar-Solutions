// Your code here...
// Your code here...
#include<stdio.h>
int main(){
    int n,arr;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        scanf("%d ",&arr);
    }
    for(int j=n;j,=1;j--){
        if (arr[i]>arr[j]){
            printf("%d ",arr[j]);
        }
        else {
            printf("%d ",arr[i]);
        }
    }
    return 0;
}