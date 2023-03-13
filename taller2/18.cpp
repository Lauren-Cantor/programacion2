#include <stdio.h>

int main (){
	
	int num2, num1;
	
	printf ("ingrese primer numero: ");
	scanf("%d", &num1);
	printf ("ingrese segundo numero: ");
	scanf("%d", &num2);
	
	if (num1<num2)
	for (int i=num1; i<=num2; i++){
	if (i%5==0){	
	printf ("multiplo %d\n",i);
	} 
	}else if (num1>num2){
	for (int i=num2; i<=num1; i++){
	if (i%5==0){	
	printf ("multiplo %d\n",i);
	}
}
}
}
