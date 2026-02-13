#include <stdio.h>

int main() {
    int choice;
    int amount;
    int balance = 100000;

    do {

        printf("\n--- ATM MENU ---\n");
        printf("1. Balance Inquiry\n");
        printf("2. Cash Withdrawal\n");
        printf("3. Deposit\n");
        printf("4. Exit\n");
        printf("----------------\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Current balance: %d\n", balance);
                break;

            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%d", &amount);
                if (amount > balance) {
                    printf("Error: Insufficient funds!\n");
                } else {
                    balance -= amount; 
                    printf("Withdrawal successful! New balance: %d\n", balance);
                }
                break;

            case 3:
                printf("Enter amount to deposit: ");
                scanf("%d", &amount);
                balance += amount; 
                printf("Deposit successful! New balance: %d\n", balance);
                break;

            case 4:
                printf("Thank you for using our ATM. Goodbye!\n");
                break;

            default:
                printf("Invalid choice! Please select 1-4.\n");
        }

    } while (choice != 4); 

    return 0;
}