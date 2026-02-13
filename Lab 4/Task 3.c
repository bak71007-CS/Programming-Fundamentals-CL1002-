#include<stdio.h>

int main(){
	
	float bal;

	printf("Enter account balance: ");
	scanf("%f", &bal);

	if(bal>0){
		printf("Positive");
	}
	else if(bal<0){
		printf("Overdrawn");
	}
	else if(bal=0){
	printf("Zero Balance");
	}
	else 
	printf("Inavalid Input");
	
	return 0;
}