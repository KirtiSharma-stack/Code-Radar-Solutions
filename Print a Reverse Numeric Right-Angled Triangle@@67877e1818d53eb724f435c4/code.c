#include <stdio.h>



int main() {
    // printf("%s", welcome());
    int a;
    scanf("%d",&a);
    for (int i=1;i<=a;i++){
        for (int j=i;j>=a;j--){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}