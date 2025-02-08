#include <stdio.h>

int main() {
    // printf("%s", welcome())
     int a;
     scanf("%d\n",&a);
    //  for (int i=1;i=a;i++){
    //     for (int j=1;j=i){
    //         printf("*");
    //     }
    //  }
    for(int i=1; i<=a;i++){

        for (int j=1;j<=a;j++){
            if (j==1 || j==a || i=1 ||i=a){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
      

    }
    return 0;
}