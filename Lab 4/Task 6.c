#include<stdio.h>

int main(){
    
    float s1, s2, s3, s4, s5, total, percentage;

    printf("Enter marks for 5 subjects (0-100):\n");
    scanf("%f%f%f%f%f", &s1, &s2, &s3, &s4, &s5);

    total = s1 + s2 + s3 + s4 + s5;
    percentage = (total / 500) * 100;

    printf("\nTotal Percentage: %.2f%%\n", percentage);

    if(percentage >= 85){
        printf("Result: Full Scholarship\n");
    }
    else if(percentage >= 70){
        printf("Result: Partial Scholarship\n");
    }
    else if(percentage >= 50){
        printf("Result: Eligible for Consideration\n");
    }
    else{
        printf("Result: Not Eligible\n");
    }

    return 0;
}