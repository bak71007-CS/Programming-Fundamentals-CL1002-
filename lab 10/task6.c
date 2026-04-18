#include <stdio.h>

int main() 
{
    FILE *fptr;
    char name[30];
    int grade, i;

    fptr = fopen("grades.txt", "w");
    if (fptr == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    printf("Enter names and grades of 3 students:\n");

    for (i = 0; i < 3; i++) {

        printf("Student %d Name: ", i + 1);
        scanf("%s", name);

        printf("Student %d Grade: ", i + 1);

        while (scanf("%d", &grade) != 1) {
            printf("Invalid input! Enter numeric grade: ");
            while (getchar() != '\n'); 
        }

        fprintf(fptr, "%s %d\n", name, grade);
    }

    fclose(fptr);

    fptr = fopen("grades.txt", "r");
    if (fptr == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    printf("\nStored Records:\n");
    while (fscanf(fptr, "%s %d", name, &grade) == 2) {
        printf("Name: %s, Grade: %d\n", name, grade);
    }

    fclose(fptr);

    return 0;
}