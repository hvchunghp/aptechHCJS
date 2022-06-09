#include<stdio.h>

int main(){
	int n = 0;
	printf("Input n: ");
	scanf("%d",&n);
	for (int i = n-1; i > 0 ; i--){
		if(i % 2 == 0 && i % 3 == 0){
	        printf("Largest number less than %d and divisible by both 2 and 3 is: %d ",n ,i);
	        break;
		}
    }
    return 0;
}
