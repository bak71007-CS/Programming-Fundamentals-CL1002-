#include<stdio.h>

int main(){
    int num=7;
    int guess;

    while(1){
        printf("Enter the Guess Number: ");
        scanf("%d", &guess);

        if(guess>num){
            printf("Too High\n");
        }
        else if(guess<num){
            printf("Too Low\n");
        }
        else{
        printf("Correct\n");
        break;
        }
    }

    return 0;
}