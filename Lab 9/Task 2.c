#include<stdio.h>

float applyDiscount(float price, int tier){
    float discount = 0;
    float final;

    if(tier == 1){
        discount = price * 0.05;
    }
    else if(tier == 2){
        discount = price * 0.10;
    }
    else if(tier == 3){
        discount = price * 0.20;
    }
    else if(tier == 4){
        discount = price * 0.30;
    }
    else{
        printf("Invalid Input!\n");
        return price;
    }

    final = price - discount;

    if(final < 2000){
        final = final + 150;
    }

    return final;
}

void printInvoice(float original, float final){
    printf("Original Price: %.2f\n", original);
    printf("Final Price: %.2f\n", final);
}

int main(){
    float price, final;
    int tier;

    printf("Enter Price: ");
    scanf("%f", &price);

    printf("Enter Tier (1-4): ");
    scanf("%d", &tier);

    final = applyDiscount(price, tier);

    printInvoice(price, final);

    return 0;
}