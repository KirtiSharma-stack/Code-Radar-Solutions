#include <stdio.h>



int main() {
    // printf("%s", welcome());
    int l,k;
    scanf("%d %d",&l,&k);
    if (l>k){
        printf("True");
    }
    else if(l==k){
        printf("True");
    }
    else{
        printf("False");
    }
    return 0;
}