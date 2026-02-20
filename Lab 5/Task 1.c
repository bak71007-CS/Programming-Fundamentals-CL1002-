#include <stdio.h>

int main() {
    int fitnessScore, age;

    printf("Enter Fitness Score: ");
    scanf("%d", &fitnessScore);

    printf("Enter Age: ");
    scanf("%d", &age);

    if (fitnessScore >= 85) {
        
        if (age < 25) {
            printf("Discount = 40%%\n");
        } else {
            printf("Discount = 25%%\n");
        }

    } else {

        if (fitnessScore >= 70 && age < 30) {
            printf("Discount = 15%%\n");
        } else {
            printf("No Discount\n");
        }

    }

    return 0;
}