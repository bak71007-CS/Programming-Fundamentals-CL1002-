#include<stdio.h>
#include<string.h>

struct order
{
    int orderID;
    char customername[100];
    char prod_name[100];
    int quantity;
    float unitprice;
    char status[50];
};

float computetotal(struct order o)
{
    float total;

    total = o.quantity * o.unitprice;
    return total;

}

void filterByStatus(struct order orders[], int n, char *status) 
{
    printf("\nOrders with status %s:\n", status);

    for (int i = 0; i < n; i++) 
    {
        if (strcmp(orders[i].status, status) == 0) 
        {
            printf("Order ID: %d \nStatus: %s\n", orders[i].orderID, orders[i].status);
        }
    }
}

int main()
{
    struct order orders[4];

    printf("\nEnter Details:\n");
    
    for(int i = 0; i < 4; i++)
    {
        printf("\nOrder # %d:\n", i + 1);

        printf("OrderID: ");
        scanf("%d", &orders[i].orderID);

        printf("Customer Name: ");
        scanf("%s", orders[i].customername);

        printf("Product Name: ");
        scanf("%s", orders[i].prod_name);

        printf("Quantity: ");
        scanf("%d", &orders[i].quantity);

        printf("Unit Price: ");
        scanf("%f", &orders[i].unitprice);

        printf("Status: ");
        scanf("%s", orders[i].status);
    }

    printf("\n--------Itemized Bill--------\n");
    for(int i = 0; i < 4; i++)
    {
        float total = computetotal(orders[i]);

        printf("Order ID: %d | Total Bill %.2f \n", orders[i].orderID, total);
    }

    filterByStatus(orders, 4, "Pending");

    return 0;
}