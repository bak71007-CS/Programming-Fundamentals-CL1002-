#include<stdio.h>

int main(){
	int n,c;
	
	printf("Enter the Number: ");
	scanf("%d", &n);
	
	for(int i=1; i<=10; i++){
		c=n*i;
		printf("\n%d x %d = %d", n, i, c);
	}

return 0;

}
	                                          