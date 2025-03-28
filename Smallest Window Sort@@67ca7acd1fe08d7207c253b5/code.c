// Your code here...
#include<stdio.h>
int findunsorted
int main(){
    int t;
    scanf("%d",&t);
    for (int i=0;i<t;i++){
        int n;
        scanf("%d",&n);
        int arr[n];
        for (int j=0;j<n;j++){
            scanf("%d "&arr[j]);
        }
    printf("%d\n",findsortedsubarray(arr,n));
    }

    return 0;
}