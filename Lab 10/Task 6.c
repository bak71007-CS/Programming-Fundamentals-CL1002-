#include <stdio.h>

float totalRevenue(float bills[], int n){
    float sum = 0;
    for(int i = 1; i <= n; i++){
        sum += bills[i];
    }
    return sum;
}

int bestTable(float bills[], int n){
    int max = 0;
    for(int i = 1; i < n; i++){
        if(bills[i] > bills[max]){
            max = i;
        }
    }
    return max;
}

int isProfitable(float total){
    return (total > 10000) ? 1 : 0;
}

int main(){
    float Table[5];
    int n = 5;

    for(int i = 1; i <= n; i++){
        printf("Table %d: ", i);
        scanf("%f", &Table[i]);
    }

    float Sum = totalRevenue(Table, n);
    int Max = bestTable(Table, n);
    int profitable = isProfitable(Sum);

    printf("\n----------Report----------\n");
    printf("Total Revenue: Rs. %.2f\n", Sum);
    printf("Best Performing Table: Table %d\n", Max + 1);
    printf("Profitable Night: %s\n", profitable ? "Yes" : "No");

    return 0;
}