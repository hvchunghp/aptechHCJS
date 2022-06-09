#include<stdio.h>

int main(){
	int n, sum = 0;
	do{
		printf("Input n: ");
		scanf("%d", &n);
		if(n <= 0){
			printf("n must be greater than 0\n");
		}
	}while(n <= 0);
	for(int i = 1; i < n; i++){
		sum = sum+i;
	}
	printf("Sum of all number from 1 to %d is: %d", n, sum);
}
