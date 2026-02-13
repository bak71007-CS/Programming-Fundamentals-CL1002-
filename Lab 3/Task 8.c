#include <stdio.h>

int main() {
    int x;
    float y;
    char ch;

    printf("x = ");
    scanf("%d", &x);

    printf("y = ");
    scanf("%f", &y);

    printf("ch = ");
    scanf(" %c", &ch);   

    printf("\n%d\n%f\n%c", x, y, ch);

    return 0;
}