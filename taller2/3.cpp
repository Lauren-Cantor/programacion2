#include <stdio.h>

int main (){
	
	int a;
	
	printf ("ingrese un numero entero:");	
	scanf ("%d", &a);
	
	for (int i=1; i<=a; i++){
		
		if (a%i==0){			
			printf ("divisores exactos:%d\n", i);	
	 	}	 
	}
	return 0;
}
