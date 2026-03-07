#include<stdio.h>

int main(){
    int arr[10];
    int i;
    int max, min;

    printf("Enter 10 Values in Array:\n");

    for(i=0; i<10; i++){
        scanf("%d", &arr[i]);
    }
    
    max = arr[0];
    min = arr[0];

    for(i=0; i<10; i++){
        if(max > arr[i]){
            max = arr[i];
        }
        
        else if(min < arr[i]){
            min = arr[i];
        }
    }

    int diff;
    diff = min - max;
    printf("Difference = %d", diff);

    return 0;
}