#include<stdio.h>

int main(){
	int bal;
	int WTD;
	
	printf("Enter your account balance: ");
	scanf("%d", &bal);
	
	while(bal>0){
		printf("Enter Withdraw Amount: ");
		scanf("%d", &WTD);
		bal=bal-WTD;
	}
	printf("Final Balance: %d", bal);
	
	return 0;
}