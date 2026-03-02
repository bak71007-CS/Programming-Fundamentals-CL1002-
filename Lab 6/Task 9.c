#include<stdio.h>

int main(){
    int N;
    int count=0;

    printf("Enter the Number of Boxes: ");
    scanf("%d", &N);

    for(int i=1; i<=N; i++){
        printf("\nBox %d requires %d decorative item", i, i);
        count+=i;
    }

    printf("\nTotal Items: %d", count);

    return 0;
}