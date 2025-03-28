// // Your code here...
// // Your code here...
// #include<stdio.h>
// int isPrime(int k){
//     if (k<2){
//         // printf("not prime\n");
//         return 0;
//     }
//     for (int i=2;i*i<k;i++){
//         if (k%i==0){
//             return 0;
//         }
       
//     }
//     return 1;
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     for (int j=0;j<n;j++){
//         int num;
//         scanf("%d",&num);
//         printf("%d\n",isPrime(num));
        
//     }

//     return 0;
// }
#include <stdio.h>

int isprime(int k) {
    if (k < 2) return 0; // Numbers less than 2 are not prime

    for (int i = 2; i * i <= k; i++) {  // Optimized check till sqrt(k)
        if (k % i == 0) {
            return 0; // Not prime
        }
    }
    
    return 1; // Prime
}

int main() {
    int n;
    scanf("%d", &n);  // Read number of test cases

    for (int j = 0; j < n; j++) {
        int num;
        scanf("%d", &num);  // Read the number to check

        printf("%d\n", isprime(num));  // Print 1 for prime, 0 for not prime
    }

    return 0;  // Ensure proper termination
}
