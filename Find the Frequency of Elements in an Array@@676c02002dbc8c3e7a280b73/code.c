// Your code here...
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    // Taking input
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Counting frequency
    for (int j = 0; j < n; j++) {
        if (arr[j] == -1)  // Skip already counted elements
            continue;

        int count = 1;  // Start with 1 (itself)

        for (int k =n; k >0; k--) {  // Second loop from last
            if (arr[j] == arr[k]) {
                count++;
                arr[k] = -1;  // Mark duplicate as counted
            }
        }

        printf("%d %d \n", arr[j], count);
    }

    return 0;
}
