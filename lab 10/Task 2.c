#include <stdio.h>
#include <string.h>

int main()
{
    char storedPassword[] = "Bilal123"; 
    char input[50];
    int att = 0;

    while (att < 3)
    {
        printf("Enter password: ");
        scanf(" %49s", input);

        //Check if empty
        if (strlen(input) == 0)
        {
            printf("Password cannot be empty\n");
            continue;
        }

        //Full comparison
        if (strcmp(input, storedPassword) == 0)
        {
            printf("Access Granted\n");
            return 0;
        }
        else
        {
            att++;

            //Alphabetical comparison
            if (strcmp(input, storedPassword) < 0)
            {
                printf("Incorrect password (Input is alphabetically before stored password)\n");
            }
            else
            {
                printf("Incorrect password (Input is alphabetically after stored password)\n");
            }

            if (att == 2)
            {
                if (strncmp(input, storedPassword, 3) == 0)
                {
                    printf("Hint: First 3 characters match\n");
                }
                else
                {
                    printf("Hint: First 3 characters do not match\n");
                }
            }
        }
    }

    printf("Account Locked after 3 failed attempts\n");

    return 0;
}