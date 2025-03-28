// Your code here...
// Your code here...
#include<stdio.h>
int isPrime(int k){
    if (k<2){
        // printf("not prime\n");
        return 0;
    }
    for (int i=2;i*i<k;i++){
        if (k%i==0){
            return 0;
        }
       
    }
    return 1;
}
int main(){
    int n;
    scanf("%d",&n);
    for (int j=0;j<n;j++){
        int num;
        scanf("%d",&num);
        printf("%d\n",isPrime(num));
        
    }

    return 0;
}