#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int w;
    scanf("%d\n",&w);
    printf("You entered: %d", w);
    return 0;
}