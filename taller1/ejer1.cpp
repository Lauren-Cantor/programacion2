#include <stdio.h>

int main (){
	
	int a;
	
	printf("ingrese un numero de 3 cifras: ");
	scanf ("%d", &a);
	
	int b,c,d;
	
	b = a /100;
	c = (a % 100) / 10;
	d = (a % 100) %10;
	
	printf("el numero %d al reves es %d%d%d", a,d,c,b);
	
	return 0;
	
}
