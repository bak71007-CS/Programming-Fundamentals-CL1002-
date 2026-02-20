#include <stdio.h>

int main(){
    int data, charges;

    printf("Enter data used in GB: ");
    scanf("%d", &data);

    if (data <= 2){
        charges = data * 50;
        printf("Charges: %d Rs\n", charges);
    }
    else if (data > 2 && data <= 10){
        int c_type;

        printf("Enter Customer type (1 for Prepaid, 2 for Postpaid): ");
        scanf("%d", &c_type);

        if (c_type == 1)   {
            charges = data * 40;
            printf("Charges: %d Rs\n", charges);
        }
        else if (c_type == 2)   {
            charges = data * 35;
            printf("Charges: %d Rs\n", charges);
        }
        else{
            printf("Invalid Customer Type\n");
        }
    }
    else{
        charges = data * 25;
        printf("Charges: %d Rs\n", charges);
    }

    return 0;
}