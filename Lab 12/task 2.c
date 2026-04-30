#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long *contacts;
    int i;
    
    contacts = (long long*) malloc(3 * sizeof(long long));

    printf("Enter 3 contact IDs:\n");
    for(i = 0; i < 3; i++)
    {
        printf("Contact %d: ", i + 1);
        scanf("%lld", &contacts[i]);  
    }

    long long *temp = realloc(contacts, 5 * sizeof(long long));

    if(temp == NULL)
    {
        printf("Realloc failed!\n");
        free(contacts);
        return 1;
    }

    contacts = temp;

    printf("Enter 2 more contact IDs:\n");
    for(i = 3; i < 5; i++)
    {
        printf("Contact %d: ", i + 1);
        scanf("%lld", &contacts[i]);
    }

    printf("\nAll contacts:\n");
    for(i = 0; i < 5; i++)
    {
        printf("%lld ", contacts[i]);
    }

    free(contacts);
    contacts = NULL;

    return 0;
}