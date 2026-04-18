#include <stdio.h>
#include <string.h>

int main()
{
    char email[100];
    char copy[100];
    char display[150] = "Email: ";
    char *atPtr;

    printf("Enter email: ");
    scanf(" %99s", email);

    //Copy original email
    strcpy(copy, email);

    //Find @
    atPtr = strchr(copy, '@');

    if (atPtr == NULL)
    {
        printf("Error: Invalid email, no @ found\n");
        return 0;
    }

    //Extract domain skip @
    char *domain = atPtr + 1;

    //Check if domain contains '.'
    if (strstr(domain, ".") == NULL)
    {
        printf("Error: Invalid domain (no '.' found)\n");
        return 0;
    }

    strcat(display, copy);

    //Output
    printf("Domain: %s\n", domain);
    printf("%s\n", display);

    return 0;
}