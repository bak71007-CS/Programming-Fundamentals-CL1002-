#include<stdio.h>

int main(){
	int arr[100];
	int i,j,n;
	
	printf("Enter Number of Elements: ");
	scanf("%d", &n);
	
	printf("Enter Numbers: \n");
	
	for(i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	
	printf("%d ", arr[n-1]);
	
	for(i=0; i<n-1; i++){
		printf("%d ", arr[i]);
	}
	
	return 0;
}
