#include <stdio.h>

int countupper(char *str)
{
    if(*str == '\0')
        return 0;

    int count = 0;

    if(*str >= 'A' && *str <= 'Z')
        count = 1;

    return count + countupper(str + 1);
}

int countdigits(char *str)
{
    if(*str == '\0')
        return 0;

    int count = 0;

    if(*str >= '0' && *str <= '9')
        count = 1;

    return count + countdigits(str + 1);
}

int main()
{
    char password[100];

    printf("Enter password: ");
    scanf("%s", password);

    printf("Uppercase letters: %d\n", countupper(password));
    printf("Digits: %d\n", countdigits(password));

    return 0;
}