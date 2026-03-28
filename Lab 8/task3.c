#include <stdio.h>

int main(){

    int temp[7][3] = {
        {23,24,25}, 
        {26,23,27}, 
        {22,21,20}, 
        {28,26,27}, 
        {30,29,28}, 
        {31,30,28}, 
        {31,33,34}
    };
	int i, j, max = temp[0][0], sum;

    for(i = 0; i < 7; i++){
        for(j = 0; j < 3; j++){
            if(temp[i][j] > max){
                max = temp[i][j];
            }
        }
    }
    printf("Highest Temperature of the week was %d Celsius\n", max);

    for(i = 0; i < 7; i++){
        sum = 0;
        for(j = 0; j < 3; j++){
            sum += temp[i][j];
        }
        printf("Avg temp for Day %d was %d\n", i + 1, sum / 3);
    }

    return 0;
}