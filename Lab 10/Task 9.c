#include<stdio.h>

int main(){
    int attendance[4][5] = {1, 0, 1, 1, 0,
                            0, 1, 1, 1, 1,
                            1, 1, 1, 1, 0,
                            0, 0, 0, 0, 1};
    
    int (*p)[5] = attendance;
    int att_total, day;

    for(int i = 0; i < 4; i++){
        att_total = 0;
        printf("\nStudent %d: ", i+1);

        for(int j = 1; j <= 5; j++){
            day = (*(p + i))[j];
            printf("%d ", day);
            att_total += day;
        }

        printf("\nTotal Attendance: %d", att_total);
        if(att_total < 3){
            printf("\nAt Risk!");
        }

        printf("\n");
    }

    return 0;
}