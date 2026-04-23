#include <stdio.h>

int countWays(int n)
{
    if(n == 0 || n == 1)
        return 1;

    return countWays(n - 1) + countWays(n - 2);
}

void printPaths(int n, char path[], int index)
{
    if(n == 0)
    {
        path[index] = '\0';
        printf("%s\n", path);
        return;
    }

    if(n >= 1)
    {
        path[index] = '1';
        path[index + 1] = '+';
        printPaths(n - 1, path, index + 2);
    }

    if(n >= 2)
    {
        path[index] = '2';
        path[index + 1] = '+';
        printPaths(n - 2, path, index + 2);
    }
}

int main()
{
    int n;
    char path[100];

    printf("Enter N (1 to 15): ");
    scanf("%d", &n);

    printf("Total ways to reach %d = %d\n", n, countWays(n));

    printf("\nAll possible paths:\n");
    printPaths(n, path, 0);

    return 0;
}