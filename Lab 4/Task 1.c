#include<stdio.h>

int main(){
	
	float att;
	printf("Enter attendnce in %: ");
	scanf("%f", &att);
	
	if(att>=75){
		printf("Selected for Tournament");
	}
	else
	printf("Not selected");
	
	return 0;
}