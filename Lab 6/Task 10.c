#include<stdio.h>

int main(){
    int score;
    int dist = 0, pass = 0, fail = 0;

    while(1){
        printf("Enter your score (0-100): ");
        scanf("%d", &score);

        if(score==-1){
            break;
        }
        if(score>=75){
            dist++;
        }
        else if(score>=50 && score<=74){
            pass++;
        }
        else if(score<50){
            fail++;
        }
        else
        printf("Invalid Command");
    }

    printf("\nDistinctions Students: %d", dist);
    printf("\n Pass Students: %d", pass);
    printf("\nFail Students: %d", fail);

    return 0;
}