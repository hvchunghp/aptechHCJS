#include <stdio.h>
#include<stdlib.h>
int main(){
    int n, tmp;
    bool checkFirstNumber = true;
        do{
    	printf("Enter the number: ");
    	scanf("%d", &n);
    	if(n <= 0){
    		printf("n must be greater than 0.\n");
		}
	}while(n <= 0);
	printf("The number after inverse is: ");
    while(n > 0){
        tmp = n % 10;
        //the check variable checkFirstNumber helps to check if the first character is a 0 or not, if it is, it will not be displayed
        if(checkFirstNumber == true){
            if(tmp != 0){
                printf("%d", tmp);
                checkFirstNumber = false;
            }
        }else{
            printf("%d", tmp);
        }
        n = n / 10;
    }
}
