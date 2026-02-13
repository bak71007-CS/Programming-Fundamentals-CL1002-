#include<stdio.h>

int main(){
    
    float total_amount, discount_val, final_bill;

    printf("Enter total purchase amount: ");
    scanf("%f", &total_amount);

    if(total_amount >= 5000){
        discount_val = total_amount * 0.20;
        printf("Discount Applied: 20%%\n");
    }
    else if(total_amount >= 3000){
        discount_val = total_amount * 0.10;
        printf("Discount Applied: 10%%\n");
    }
    else{
        discount_val = 0;
        printf("No Discount Applied\n");
    }

    final_bill = total_amount - discount_val;

    printf("Discount Amount: %.2f\n", discount_val);
    printf("Final Bill to Pay: %.2f\n", final_bill);

    return 0;
}