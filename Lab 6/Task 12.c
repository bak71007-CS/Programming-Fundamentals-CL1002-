#include <stdio.h>

int main(){
    int seats = 40;
    int choice = 1;

    while (seats > 0 && choice != 0) {
        printf("Enter 1 to book a seat or 0 to stop: ");
        scanf("%d", &choice);

        if (choice == 1) {
            seats--;
            printf("Seat booked successfully.\n");
            printf("Remaining seats: %d\n", seats);
        }
        else if (choice == 0) {
            break;
        }
        else {
            printf("Invalid input.\n");
        }
    }

    if (seats == 0) {
        printf("All seats are booked. No more reservations allowed.\n");
    }

    return 0;
}