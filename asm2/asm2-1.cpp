#include<stdio.h>

int main(){
	int n = 0;
	while(n<=0){
		printf("Input n: ");
		scanf("%d",&n);
		if(n == 1){
			printf("There is no odd number less than 1.");
		}
		else if(n > 1){
			printf("The odd numbers less than %d are: ", n);
			for(int i = 1; i < n; i++){
				if(i%2 == 1){
					printf("%d ",i);
				}
			}
		}else{
			printf("n must be greater than 0.\n");
		}
	}
}
