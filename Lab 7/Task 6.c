#include<stdio.h>

int main(){

    char str[100];
    int i;
    int vowel = 0, consonant = 0;

    printf("Enter single line input:\n");
    scanf("%[^\n]", str);

    for(i=0; str[i] != '\0'; i++){

        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
           str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){

            vowel = vowel + 1;
        }
        else if(str[i] != ' '){
            consonant = consonant + 1;
        }
    }

    printf("Vowels = %d\n", vowel);
    printf("Consonants = %d", consonant);

    return 0;
}