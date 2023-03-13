#include <stdio.h>

int main (){
	int num;
	
	printf ("ingrese numero: ");
	scanf ("%d", &num);
	
	for (int i=1; i<=num; i++){
		
	if (i%5==0){
		
		printf ("%d\n",i);
	}
	}
	
}
