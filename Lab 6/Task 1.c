#include<stdio.h>

int main(){
    int att, total_att=0, P_A;
    
    printf("-----Attendaance System-----");
    printf("\n1---Present\n0---Absent\n");

    for(att=1; att<=30; att++){
            printf("Student %d: ", att);
            scanf("%d", &P_A);
            
            if(P_A==1){
            	total_att++;
			}
        }
        printf("Total Presents are: %d\n", total_att);
        printf("Total Absents are: %d", 30-total_att);
        
        return 0;

}