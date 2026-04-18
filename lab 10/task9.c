#include <stdio.h>

int main()
{
    FILE *fptr;

    fptr = fopen("config.txt", "r");

    //If file does not exist
    if (fptr == NULL)
    {
        printf("config.txt not found. Creating default configuration...\n");

        //Create file in write mode
        fptr = fopen("config.txt", "w");

        if (fptr == NULL)
        {
            printf("Error creating file.\n");
            return 1;
        }

        //default settings
        fprintf(fptr, "max_users=50\n");
        fprintf(fptr, "timeout=30\n");
        fprintf(fptr, "mode=default\n");

        fclose(fptr);

        printf("Default config.txt created successfully.\n");
    }
    else
    {
        //if file exists
        printf("config.txt found. Reading contents:\n\n");

        char line[100];

        while (fgets(line, sizeof(line), fptr) != NULL)
        {
            printf("%s", line);
        }

        fclose(fptr);
    }

    return 0;
}