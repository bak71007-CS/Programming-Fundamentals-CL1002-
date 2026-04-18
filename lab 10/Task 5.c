#include <stdio.h>
#include <string.h>

int main() 
{
    char words[6][20];
    int seen[6] = {0}; 
    int i, j, k;

    printf("Enter 6 words:\n");
    for (i = 0; i < 6; i++) {
        printf("Word %d: ", i + 1);
        scanf("%s", words[i]);  
    }

    printf("\nUnique words and their counts:\n");

    //picks each word
    for (i = 0; i < 6; i++) {

        if (seen[i] == 1)
            continue;   

        int count = 1;  

        //checks duplicates
        for (j = i + 1; j < 6; j++) {
            if (strcmp(words[i], words[j]) == 0) {
                count++;
                seen[j] = 1;  
            }
        }

        printf("\nWord: %s\n", words[i]);
        printf("Count: %d\n", count);

        printf("Characters: ");
        for (k = 0; words[i][k] != '\0'; k++) {
            printf("%c ", words[i][k]);
        }
        printf("\n");
    }

    return 0;
}