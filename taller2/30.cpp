#include <stdio.h>

int main(){
	int num, aux;
	printf("Ingrese un numero: ");
	scanf("%d", &num);
	aux = num;
	
	while(aux>=1){
		if((num)%(aux%10)==0){
			printf("%d", num);
			printf(" es multiplo de %d\n", aux%10);
		}
		aux/=10;
	}
}
