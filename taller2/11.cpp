#include <stdio.h>

int main (){
	int num, num1, num2;
	printf ("ingrese un numero de dos digitos: ");
	scanf ("%d", & num);
	
		num1= num%10;
		num2= num/10;
		
	for (int i= num2; i<=num1; i++){
	
		printf("%d",i );
	}
}
