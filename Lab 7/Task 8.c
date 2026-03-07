#include<stdio.h>

int main(){
    char str[100];

    printf("Enter characters (non-alphabets only):\n");
    scanf("%[^A-Za-z]", str);

    printf("Stored non-alphabet characters:\n%s", str);

    return 0;
}