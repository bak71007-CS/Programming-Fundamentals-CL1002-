#include <stdio.h>
#include <math.h>

int main() {
    int choice, age;
    float weight, height, bmi, bmr, ideal, maxHR;

    printf("----- Health Calculator -----\n");
    printf("1. BMI Calculation\n2. BMR Calculation\n3. Ideal Weight (Devine)\n4. Heart Rate Zone\n");
    printf("Select operation: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: // BMI
            printf("Enter weight (kg): ");
            scanf("%f", &weight);
            printf("Enter height (cm): ");
            scanf("%f", &height);

            if(weight > 0 && height > 0) {
                bmi = weight / pow(height/100, 2);
                printf("BMI = %.2f\n", bmi);
            } else {
                printf("Error: Weight and height must be positive.\n");
            }
            break;

        case 2: // BMR
            printf("Enter weight (kg): ");
            scanf("%f", &weight);
            printf("Enter height (cm): ");
            scanf("%f", &height);
            printf("Enter age (years): ");
            scanf("%d", &age);

            if(weight > 0 && height > 0 && age > 0) {
                char gender;
                printf("Enter gender (M/F): ");
                scanf(" %c", &gender);

                if(gender == 'M' || gender == 'm')
                    bmr = 10*weight + 6.25*height - 5*age + 5;
                else if(gender == 'F' || gender == 'f')
                    bmr = 10*weight + 6.25*height - 5*age - 161;
                else {
                    printf("Invalid gender input.\n");
                    break;
                }

                printf("BMR = %.2f kcal/day\n", bmr);
            } else {
                printf("Error: Weight, height, and age must be positive.\n");
            }
            break;

        case 3: // Ideal Weight
            printf("Enter height (cm): ");
            scanf("%f", &height);
            char gender2;
            printf("Enter gender (M/F): ");
            scanf(" %c", &gender2);

            if(height > 0) {
                if(gender2 == 'M' || gender2 == 'm')
                    ideal = 50 + 0.91*(height - 152.4);
                else if(gender2 == 'F' || gender2 == 'f')
                    ideal = 45.5 + 0.91*(height - 152.4);
                else {
                    printf("Invalid gender input.\n");
                    break;
                }

                printf("Ideal Weight = %.2f kg\n", ideal);
            } else {
                printf("Error: Height must be positive.\n");
            }
            break;

        case 4: // Heart Rate Zone
            printf("Enter age: ");
            scanf("%d", &age);

            if(age > 0) {
                maxHR = 220 - age;
                printf("Max Heart Rate = %.0f bpm\n", maxHR);
                printf("Heart Rate Zones (bpm):\n");
                printf("50-60%%: %.0f - %.0f\n", maxHR*0.5, maxHR*0.6);
                printf("60-70%%: %.0f - %.0f\n", maxHR*0.6, maxHR*0.7);
                printf("70-80%%: %.0f - %.0f\n", maxHR*0.7, maxHR*0.8);
                printf("80-90%%: %.0f - %.0f\n", maxHR*0.8, maxHR*0.9);
                printf("90-100%%: %.0f - %.0f\n", maxHR*0.9, maxHR*1.0);
            } else {
                printf("Error: Age must be positive.\n");
            }
            break;

        default:
            printf("Invalid operation selection.\n");
    }

    return 0;
}