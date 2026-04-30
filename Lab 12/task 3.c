#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Enter number of sensors: ");
    scanf("%d", &n);

    float *buffer = (float *) calloc(n, sizeof(float));

    if (buffer == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("\nInitial buffer values:\n");
    for (int i = 0; i < n; i++) {
        printf("Sensor %d: %.2f\n", i, buffer[i]);
    }

    printf("\nEnter temperature readings:\n");
    for (int i = 0; i < n; i++) {
        printf("Sensor %d: ", i);
        scanf("%f", &buffer[i]);
    }

    printf("\nUpdated buffer values:\n");
    for (int i = 0; i < n; i++) {
        printf("Sensor %d: %.2f\n", i, buffer[i]);
    }

    free(buffer);
    return 0;
}