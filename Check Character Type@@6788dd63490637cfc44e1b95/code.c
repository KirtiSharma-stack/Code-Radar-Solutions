// Your code here...
#include<stdio.h>
#include<string.h>
int main(){
    char a;
    scanf("%c",&a);
    char vowel[5]="aeiou";
    char digit[10]="0123456789";
    for ((int)i=0;i<strlen(vowel);i++){
        if (a==vowel[i]){
            printf("Vowel");
        }
        else{
            printf("Consonant");
        }
    }
    for ((int)j=0;j<strlen(digit);j++){
        if (a==digit[i]){
            printf("Digit");
        }
        else{
            printf("Special Character");
        }
    }
    return 0;
}