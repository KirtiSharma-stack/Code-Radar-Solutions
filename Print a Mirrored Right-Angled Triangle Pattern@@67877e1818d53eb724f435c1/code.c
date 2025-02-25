// // Your code here...
// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     for (int i=1;i<=n;i++){
//         for (int j=i+1;j<=n;j++){
//             printf("*");

//         }
//         printf("\n");
//     }
//     return 0;
// }
#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = 1; j < i; j++) {
            printf(" ");
        }
        // Print asterisks
        for (int k = i; k <= n; k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
