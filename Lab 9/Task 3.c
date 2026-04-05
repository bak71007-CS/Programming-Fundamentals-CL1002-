#include <stdio.h>

int totalRuns(int arr[]){
    int sum = 0;
    for(int i = 0; i < 10; i++){
        sum += arr[i];
    }
    return sum;
}

int highestScore(int arr[]){
    int max = arr[0];
    for(int i = 1; i < 10; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

int aboveAverage(int arr[], float avg){
    int count = 0;
    for(int i = 0; i < 10; i++){
        if(arr[i] > avg){
            count++;
        }
    }
    return count;
}

int main(){
    int scores[10];

    for(int i = 1; i <= 10; i++){
        printf("Match %d: ", i);
        scanf("%d", &scores[i]);
    }

    int total = totalRuns(scores);
    float avg = (float)total / 10;
    int max = highestScore(scores);
    int count = aboveAverage(scores, avg);

    printf("\n--------Report--------");
    printf("\nTotal Runs: %d\n", total);
    printf("Average Runs: %.2f\n", avg);
    printf("Highest Score: %d\n", max);
    printf("Matches Above Average: %d\n", count);

    return 0;
}