#include <stdio.h>


int main() {
    // printf("%s", welcome());
    int k;
    scanf("%d",&k);
    if(k>0){
        printf("Positive");
    }
    else if(k==0){
        printf("Zero");
    }
    else{
        printf("Negative");
    }

    return 0;
}