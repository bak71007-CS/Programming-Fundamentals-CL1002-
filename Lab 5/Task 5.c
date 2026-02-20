#include <stdio.h>

int main() {
    float salary, incentive;
    int service;

    printf("Enter employee salary: ");
    scanf("%f", &salary);

    printf("Enter years of service: ");
    scanf("%d", &service);

    incentive = (service > 15) ? salary * 0.35 :
                (service > 7)  ? salary * 0.20 :
                                 salary * 0.05;

    printf("Incentive Amount = %.2f\n", incentive);

    return 0;
}