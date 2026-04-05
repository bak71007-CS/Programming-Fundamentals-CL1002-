#include <stdio.h>

int validatePIN(int storedPIN, int enteredPIN){
    if(enteredPIN == storedPIN){
        return 1;
    }
    else{
    return 0;
    }
}

int main(){
    int storedPIN = 4729;
    int pin;

    for(int i = 1; i <= 3; i++){
        printf("Enter PIN: ");
        scanf("%d", &pin);

        if(validatePIN(storedPIN, pin)){
            printf("Access granted. Welcome!\n");
            break;
        }
        else{
            if(i < 3){
                printf("Wrong PIN. Attempts left: %d\n", 3 - i);
            }
            else{
                printf("Card blocked. Contact your bank.\n");
            }
        }
    }

    return 0;
}