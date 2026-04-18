#include <stdio.h>

int main()
{
    FILE *fptr;
    int score, i;
    int sum = 0;
    float average;

    fptr = fopen("survey.txt", "w");

    if (fptr == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    printf("Enter 5 survey scores (1 to 10):\n");

    for (i = 0; i < 5; i++) {
        printf("Score %d: ", i + 1);
        scanf("%d", &score);

        fprintf(fptr, "%d\n", score);
    }

    fclose(fptr);

    //Read scores from file
    fptr = fopen("survey.txt", "r");

    if (fptr == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    //sum
    while (fscanf(fptr, "%d", &score) == 1) {
        sum += score;
    }

    fclose(fptr);

    //average
    average = sum / 5.0;

    //results
    printf("\nSum of scores = %d\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}