#include <stdio.h>

int main (){
	
	int a;
	
	printf ("ingrese un numero entero:");	
	scanf ("%d", &a);
	
	for (int i=1; i<=a; i++){
		
		if (i%2==0){			
			printf ("par:%d\n", i);	
	 	}	 
	}
	return 0;
}
