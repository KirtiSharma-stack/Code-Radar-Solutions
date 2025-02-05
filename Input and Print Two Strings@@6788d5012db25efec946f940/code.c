#include <stdio.h>


int main() {
    char a[100];
    //getchar;
    //fgets(a,sizeof(a),stdin);
    scanf("%s %s",&a);
    printf("You entered: %s and %s",a);
    return 0;
}