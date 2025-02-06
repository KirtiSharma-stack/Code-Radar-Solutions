#include <stdio.h>
int main() {
    // printf("%s", welcome());
    int a;
    scanf("%d",&a);
    for (int i=1;i<=a;i++){
        for (int j=a;j>=i;j--){
            printf(" ");
        }
        //printf("\n");
        for (int k=1;k<=i-1;k++){
            printf("*");
        }
        //printf("\n");
        for (int l=1;l<=i;l++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}