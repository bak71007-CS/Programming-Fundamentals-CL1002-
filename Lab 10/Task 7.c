#include <stdio.h>

int main() {
    int marks[6] = {72, 85, 62, 58, 90, 95};
    int *p = marks;  
    int i, highest;

    // Print original marks
    printf("Original marks:\n");
    for(i = 0; i < 6; i++) {
        printf("%d ", *(p + i));
    }
    printf("\n");

    //Find highest mark
    highest = *p;  
    for(i = 1; i < 6; i++) {
        if(*(p + i) > highest) {
            highest = *(p + i);
        }
    }

    //Scale marks in-place
    for(i = 0; i < 6; i++) {
        *(p + i) = (int)(((float)*(p + i) / highest) * 100);
    }

    //Print scaled marks
    printf("Scaled marks:\n");
    for(i = 0; i < 6; i++) {
        printf("%d ", *(p + i));
    }
    printf("\n");

    return 0;
}