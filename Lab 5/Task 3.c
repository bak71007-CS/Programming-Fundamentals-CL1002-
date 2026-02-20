#include <stdio.h>

int main(){
    int lugg_type, fees = 0, weight, size;

    printf("-----Luggage Type-----");
    printf("\n1. Handbag\n2. Checked Bag\n3. Sports Equipment");

    printf("\nEnter lugg_type: ");
    scanf("%d", &lugg_type);

    printf("Enter weight of the bag in KG: ");
    scanf("%d", &weight);

    switch(lugg_type)
    {
        case 1:
            printf("Enter size of Bag\n1. Small\n2. Large: ");
            scanf("%d", &size);

            switch(size)
            {
                case 1:
                    fees = 100 * weight;
                    break;

                case 2:
                    fees = 200 * weight;
                    break;

                default:
                    printf("Invalid size\n");
            }

            printf("Total Fees: %d\n", fees);
            break;

        case 2:
            printf("Enter type of Checked Bag\n1. Domestic\n2. International: ");
            scanf("%d", &size);

            switch(size)
            {
                case 1:
                    fees = 300 * weight;
                    break;

                case 2:
                    fees = 500 * weight;
                    break;

                default:
                    printf("Invalid option\n");
            }

            printf("Total Fees: %d\n", fees);
            break;

        case 3:
            fees = 1000 * weight;
            printf("Total Fees: %d\n", fees);
            break;

        default:
            printf("Invalid luggage type\n");
    }

    return 0;
}