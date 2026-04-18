#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char name[50];   
    int len, valid = 1;

    printf("Enter your name: ");
    scanf("%[^\n]", name);

    len = strlen(name);

    //Length
    if (len < 3 || len > 20)
    {
        valid = 0;
    }

    //Space Check
    if (name[0] == ' ' || name[len - 1] == ' ')
    {
        valid = 0;
    }

    //Digits Check
    for (int i = 0; i < len; i++)
    {
        if (isdigit(name[i]))
        {
            valid = 0;
            break;
        }
    }

    //Ouput
    if (valid)
    {
        printf("Valid Name\n");
    }
    else
    {
        printf("Invalid Name\n");
    }

    printf("Length: %d\n", len);

    return 0;
}