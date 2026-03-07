#include <stdio.h>

int main() {
    int pass[10], fail[10];
    int i = 0, p = 0, f = 0;
    int mark;
    float avgPass = 0, avgFail = 0;

    while(i < 10){
        printf("Enter quiz mark (0-10) or -1 to exit: ");
        scanf("%d", &mark);

        if(mark == -1){
            break;
        }

        if(mark >= 5 && mark <= 10){
            pass[p] = mark;
            avgPass = avgPass + mark;
            p++;
        }
        else if(mark >= 0 && mark < 5){
            fail[f] = mark;
            avgFail = avgFail + mark;
            f++;
        }
        else{
            printf("Invalid mark\n");
        }
		i++;
    }

    printf("\nPass Students Marks:\n");
    for(i = 0; i < p; i++){
        printf("%d ", pass[i]);
    }

    if(p > 0){
        printf("\nAverage Pass Marks = %.2f", avgPass/p);
    }

    printf("\n\nFail Students Marks:\n");
    for(i = 0; i < f; i++){
        printf("%d ", fail[i]);
    }

    if(f > 0){
        printf("\nAverage Fail Marks = %.2f", avgFail/f);
    }

    return 0;
}