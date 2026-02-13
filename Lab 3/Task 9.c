#include <stdio.h>

int main() {
    double num;

    printf("Enter a double value: ");
    scanf("%lf", &num);

    printf("\nDefault precision: %lf", num);
    printf("\n2 decimal places: %.2lf", num);
    printf("\n5 decimal places: %.5lf", num);

    return 0;
}
