#include <stdio.h>

int main (){
	
	int colombiano;
	float dolares, euros;
	
	printf("ingrese la cantinan de dinero en pesos colombianos: ", colombiano);
	scanf ("%d", &colombiano);
	
	
	dolares = (colombiano*0.00021);
	printf ("dolares: %2f\n", dolares);
	
	euros = (colombiano*0.00019);
	printf ("euros: %2f", euros);
	
	return 0;
	
}
