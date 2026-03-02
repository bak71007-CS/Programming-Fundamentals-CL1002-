#include<stdio.h>

int main(){
    int op;
    float num1, num2;
    float sum, subt;

    do {
        printf("\nEnter Operation\n");
        printf("1. +\n");
        printf("2. -\n");
        printf("0. Exit\n");
        printf("Choice: ");
        scanf("%d", &op);

        if(op == 1 || op == 2) {
            printf("Enter Number 1: ");
            scanf("%f", &num1);

            printf("Enter Number 2: ");
            scanf("%f", &num2);
        }

        switch(op) {
            case 1:
                sum = num1 + num2;
                printf("Sum = %.2f\n", sum);
                break;

            case 2:
                subt = num1 - num2;
                printf("Subtraction = %.2f\n", subt);
                break;

            case 0:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Command\n");
        }

    } while(op != 0);

    return 0;
}