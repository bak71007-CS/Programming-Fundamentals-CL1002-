#include <stdio.h>

int main(){

    int seat[5][6] = {
        {1, 0, 0, 0, 1, 0}, 
        {0, 0, 0, 0, 1, 0}, 
        {1, 1, 1, 0, 1, 0}, 
        {0, 0, 0, 0, 1, 0}, 
        {1, 0, 0, 0, 1, 0}
    };

    int i, j;
    int count = 0;

    for(i = 0; i < 5; i++){
        for(j = 0; j < 6; j++){
            if(seat[i][j] == 0){
                count++;
            }
        }
    }

    printf("%d seats are available\n", count);

    int max = 0, row = 0;

    for(i = 0; i < 5; i++){
        count = 0;

        for(j = 0; j < 6; j++){
            if(seat[i][j] == 1){
                count++;
            }
        }

        if(count > max){
            max = count;
            row = i;
        }
    }

    printf("Max seats booked in a row are %d in row %d", max, row + 1);

    return 0;
}