#include<stdio.h>

int main(){
	int arr[100];
	int i , num , count=0;
	
	printf("Enter Numbers: \n");
	
	for(i=1; i<=10; i++){
		scanf("%d", &arr[i]);
	}
	
	printf("Enter the number to search: ");
	scanf("%d", &num);
	
	for(i=1; i<=10; i++){
		if(arr[i] == num){
			count++;
		}
	}
	
	if(count > 0){
		printf("Number %d is in the Array %d times", num, count);
	}
	else 
	printf("Number not found!");
	
	return 0;
}
