#include <stdio.h>
int main() {
    // printf("%s", welcome());
    int a;
    scanf("%d",&a);
    for (int i=1;i<=a;i++){
        for (int j=a+1;j>=i;j--){
            printf(" ");
        }
        //printf("\n");
        for (int k=1;k<=i;k++){
            printf("*");
        }
        //printf("\n");
        for (int l=1;l<=i-1;l++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}