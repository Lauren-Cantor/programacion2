#include <stdio.h>
int main(){
	int factorial=1, num;
	printf("Ingrese un numero: ");
	scanf("%d", &num);
	
	printf("1! = 1\n");	
	for(int i=2; i<=num; i++){
		factorial*=i;	
		printf("%d! = %d\n", i, factorial);			
	}		
}
