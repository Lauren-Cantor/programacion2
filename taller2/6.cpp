#include <stdio.h>

void imprimirNumeros (int numero){
	printf("Numero: %d\n", numero);
	for (int i=1; i<= numero; i++){
		printf ("%d ", i);
	}
	printf("\n");
}

int main (){
	
	int num, num1, num2, num3;
	
	printf ("ingrese un numero de tres digitos: ");
	scanf ("%d", &num);
	
	num1= (num/100)%10;
	num2= (num/10)%10;
	num3= num%10;
	
	imprimirNumeros (num1);
	imprimirNumeros (num2);
	imprimirNumeros (num3);  
	
	
	

}


