#include<stdio.h>

int main(){
	int pass;
	
	do{
		printf("Enter Password: ");
		scanf("%d", &pass);
		
		if(pass==1234){
			printf("Logged in");
		}
		else 
		printf("Invalid Password\n");
	}
	while(pass!=1234);
	
	return 0;

}