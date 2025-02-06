#include <stdio.h>


int main() {
    // printf("%s", welcome());
    int a;
    scanf("%d\n",&a);
    for (int i=1;i<=a;i++){
        for (int j=a;j>=i;j--){
            printf("*",j);
        }
        printf("\n");
    }
    return 0;
} 