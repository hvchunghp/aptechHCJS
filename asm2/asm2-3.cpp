#include<stdio.h>

//prime number check
int PNC(int x){
	if (x<2){
		return false;
	}
	for (int i=2; i<=x/2; i++){
		if(x%i==0){
			return false;
		}
	}
	return true;
}

int main(){
	int n;
	printf("Input n: ");
	scanf("%d", &n);
	if(PNC(n)==true){
		printf("n is a prime number");
	}else{
		printf("n isn't a prime number");
	}
}
