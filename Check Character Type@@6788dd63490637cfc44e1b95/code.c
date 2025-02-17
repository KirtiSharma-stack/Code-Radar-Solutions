// Your code here...
#include<stdio.h>
#include<ctype.h>
int main(){
    char a;
    scanf("%c",&a);
    // char vowel[5]="aeiou";
    // char digit[10]="0123456789";
    // for ((int)i=0;i<strlen(vowel);i++){
    //     if (a==vowel[i]){
    //         printf("Vowel");
    //     }
    //     else{
    //         printf("Consonant");
    //     }
    // }
    // for ((int)j=0;j<strlen(digit);j++){
    //     if (a==digit[i]){
    //         printf("Digit");
    //     }
    //     else{
    //         printf("Special Character");
    //     }
    // }
    switch (a){
        case'a':case'e':case'i':case'o':case'u':case'O';
        printf("Vowel");
        break;
        case'0': case'1': case'2': case'3': case'4': case'5': case'6': case'7': case'8': case'9':
        printf("Digit");
        break;
        default:
            if(isalpha(a)){
                printf("Consonant");
            }
            else{
                printf("Special Character");
            }

        }
    
    return 0;
}