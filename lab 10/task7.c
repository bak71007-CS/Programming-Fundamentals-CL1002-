#include <stdio.h>

int main() 
{
    FILE *fptr;
    char product[50];
    int quantity;

    //Append mode
    fptr = fopen("inventory.txt", "a");
    if (fptr == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter product name: ");
    scanf(" %[^\n]", product);

    printf("Enter quantity: ");
    scanf("%d", &quantity);

    fprintf(fptr, "%s %d\n", product, quantity);
    fclose(fptr);

    //Read mode
    fptr = fopen("inventory.txt", "r");
    if (fptr == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("\nCurrent Inventory:\n");

    while (fscanf(fptr, " %[^\n] %d", product, &quantity) == 2) {
        printf("Product: %s, Quantity: %d\n", product, quantity);
    }

    fclose(fptr);

    return 0;
}