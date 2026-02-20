#include <stdio.h>

int main() {
    int enteredCard, enteredPIN;
    int correctCard = 12345;
    int correctPIN = 1111;
    float balance = 50000;
    float amount;

    printf("Enter Card Number: ");
    scanf("%d", &enteredCard);

    if (enteredCard == correctCard) {

        printf("Enter PIN: ");
        scanf("%d", &enteredPIN);

        if (enteredPIN == correctPIN) {

            printf("Enter Transaction Amount: ");
            scanf("%f", &amount);

            if (amount > 0 && amount <= balance) {
                printf("Transaction Successful\n");
                balance -= amount;
                printf("Remaining Balance: %.2f\n", balance);
            }
            else {
                printf("Insufficient Funds\n");
            }

        }
        else {
            printf("Invalid PIN\n");
        }

    }
    else {
        printf("Invalid Card\n");
    }

    return 0;
}