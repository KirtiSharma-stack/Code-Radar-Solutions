// Your code here...
// Your code here...
#include<stdio.h>
void isprime(int k){
    if (k<2){
        printf("not prime\n");
        return;
    }
    for (int i=2;i<k;i++){
        if (k%i==0){
            return 0;
        }
        return 1;
    }
}
int main(){
    int n;
    scanf("%d",&n);
    for (int j=0;j<n;j++){
        int num;
        scanf("%d",&num);
        isprime(num);
        
    }

    return 0;
}