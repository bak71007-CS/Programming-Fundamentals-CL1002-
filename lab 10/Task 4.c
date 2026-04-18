#include <stdio.h>
#include <string.h>

int main() 
{
    char names[5][30];
    char search[30];
    int i, found = 0;

    printf("Enter names of 5 students:\n");
    for (i = 0; i < 5; i++) {
        printf("Student %d: ", i + 1);
        fgets(names[i], 30, stdin);

        //Remove newline character from fgets
        names[i][strcspn(names[i], "\n")] = '\0';
    }

    //Display all names
    printf("\nList of Students:\n");
    for (i = 0; i < 5; i++) {
        printf("%d. %s\n", i, names[i]);
    }

    //Search for a name
    printf("\nEnter a name to search: ");
    fgets(search, 30, stdin);

    //Remove newline from search input
    search[strcspn(search, "\n")] = '\0';

    //Compare using strcmp
    for (i = 0; i < 5; i++) {
        if (strcmp(names[i], search) == 0) {
            printf("Found at position %d\n", i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Student not found\n");
    }

    return 0;
}