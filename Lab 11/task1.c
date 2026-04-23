#include <stdio.h>

int totalPower(int floors)
{
    if(floors == 1)
    {
        return 100;
    }
    return totalPower(floors - 1) + (100 * (1 << (floors - 1)));
}

int main()
{
    int floors;

    printf("Enter number of floors: ");
    scanf("%d", &floors);

    printf("Total power consumption = %d kWh\n", totalPower(floors));

    return 0;
}