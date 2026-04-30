#include<stdio.h>
#include<stdlib.h>

int main()
{
    float *grades;
    int n;

    printf("Enter the Number of Students: ");
    scanf("%d", &n);

    grades = (float*) malloc(n * sizeof(float));

    printf("Enter Grades for Students:\n ");
    for(int i = 0; i < n; i++)
    {
        printf("Student %d: ", i + 1);
        scanf("%f", &grades[i]);
    }

    printf("\nGrade Printing:\n");
    for(int i = 0; i < n; i++)
    {
        printf("Student %d: %.2f\n", i+1, grades[i]);
    }

    free(grades);

    return 0;
}