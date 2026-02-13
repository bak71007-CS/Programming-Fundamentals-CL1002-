#include <stdio.h>

int main() {
    char username[10];
    int password;

    printf("Enter Username: ");
    scanf("%s", username);

    printf("Enter Password: ");
    scanf("%d", &password);

    if (username[0]=='u' && 
        username[1]=='s' && 
        username[2]=='e' && 
        username[3]=='r' && 
        username[4]=='\0' && 
        password==7890) 
    {
        printf("Connected Successfully");
    }
    else {
        printf("Connection Failed");
    }

    return 0;
}
