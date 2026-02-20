#include <stdio.h>

int main() {
    int categ, qnt, bill = 0;
    int fic_type, nonfic_type;

    printf("----- Book Category -----");
    printf("\n1. Fiction\n2. Non-Fiction");

    printf("\nSelect the book category: ");
    scanf("%d", &categ);

    switch (categ) {
        case 1:
            printf("Enter Fiction Type\n1. Novel (Rs. 600)\n2. Comic (Rs. 300): ");
            scanf("%d", &fic_type);

            switch (fic_type) {
                case 1:
                    printf("You selected: Novel\n");
                    printf("Enter quantity of books: ");
                    scanf("%d", &qnt);
                    bill = qnt * 600;
                    break;

                case 2:
                    printf("You selected: Comic\n");
                    printf("Enter quantity of books: ");
                    scanf("%d", &qnt);
                    bill = qnt * 300;
                    break;

                default:
                    printf("Invalid Fiction Type\n");
            }
            break;

        case 2:
            printf("Enter Non-Fiction Type\n1. Biography (Rs. 800)\n2. Self-Help (Rs. 500): ");
            scanf("%d", &nonfic_type);

            switch (nonfic_type) {
                case 1:
                    printf("You selected: Biography\n");
                    printf("Enter quantity of books: ");
                    scanf("%d", &qnt);
                    bill = qnt * 800;
                    break;

                case 2:
                    printf("You selected: Self-Help\n");
                    printf("Enter quantity of books: ");
                    scanf("%d", &qnt);
                    bill = qnt * 500;
                    break;

                default:
                    printf("Invalid Non-Fiction Type\n");
            }
            break;

        default:
            printf("Invalid Category\n");
    }

    
        printf("Total Bill = Rs. %d\n", bill);

    return 0;
}