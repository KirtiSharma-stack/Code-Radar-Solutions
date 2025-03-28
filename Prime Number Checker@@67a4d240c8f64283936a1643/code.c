// Your code here...
// Your code here...
#include<stdio.h>
void isprime(int k){
    for (int i=2;i<k;i++){
        if (k/i==0){
            printf("1");
        }
        else{
            printf("0");
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    for (int j=0;j<n;j++){
        int num;
        scanf("%d",&num);
        printf("%d\n"isprime(num));
    }

    return 0;
}