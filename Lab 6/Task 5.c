#include<stdio.h>

int main(){
	int temp, sum=0, count=0;
	int avg;
	
	printf("Enter Temparature: ");	
	scanf("%d", &temp);
	
	while(temp != -999){
		sum=sum+temp;
		count=count+1;
		
		printf("Enter Temparature: ");	
		scanf("%d", &temp);
		
		}
		
		if(count>0){
			avg=sum/count;
			printf("Average temparature is: %d", avg);
		}

return 0;

}
	                                          