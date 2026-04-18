#include <stdio.h>

int main()
{
    FILE *fptr;
    char name[50];
    int s1, s2, s3;
    float avg;
    char status[10];

    printf("Enter student name: ");
    scanf(" %[^\n]", name);

    printf("Enter 3 subject scores:\n");
    scanf("%d %d %d", &s1, &s2, &s3);

    //average
    avg = (s1 + s2 + s3) / 3.0;

    //status
    if (avg >= 50)
        sprintf(status, "Pass");
    else
        sprintf(status, "Fail");

    //Open file in w+ mode
    fptr = fopen("report.txt", "w+");

    if (fptr == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    //Write report card
    fprintf(fptr, "----- REPORT CARD -----\n");
    fprintf(fptr, "Name: %s\n", name);
    fprintf(fptr, "Subject 1: %d\n", s1);
    fprintf(fptr, "Subject 2: %d\n", s2);
    fprintf(fptr, "Subject 3: %d\n", s3);
    fprintf(fptr, "Average: %.2f\n", avg);
    fprintf(fptr, "Status: %s\n", status);

    //Move pointer to start
    rewind(fptr);

    //Read and display file
    printf("\n---FILE OUTPUT---\n");

    char line[200];

    while (fgets(line, sizeof(line), fptr) != NULL)
    {
        printf("%s", line);
    }

    fclose(fptr);

    return 0;
}