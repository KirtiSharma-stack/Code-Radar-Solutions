// Your code here...
#inclde<stdio.h>
int main(){
    int k,n;
    scanf("%d",&k);
    int arr[k];
    for (int i=0;i<k;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&n);
    for (int i=0;i<arr[k];i++){
        int temp=(i+k)%n;
        printf("%d",temp);
    }
    return 0;
}