#include <stdio.h>

int main (){
	char trabajador[20];
	float salario, valor,neto;
	
	printf ("nombre del trabajador: ");
	scanf ("%s",trabajador);
	
	printf ("basico mensual: ");
	scanf ("%f", &salario);
	
	
	if (salario<1000000){	
		valor= salario*0.07;
		neto= salario+valor;
		
		printf ("el aumento fue del 7%%, que equivale a %.0f:\n",valor);
		printf ("el nuevo salario de %s es de %.0f:\n",trabajador, neto);	
	}else if (salario>= 1000000 && salario < 1500000){	
		valor= salario*0.10;
		neto= salario+valor;
		
		printf ("el aumento fue del 10%%, que equivale a %.0f: \n",valor);
		printf ("el nuevo salario de %s es de %.0f:\n ",trabajador, neto);	
	}else{	
		valor= salario*0.12;
		neto= salario+valor;
		
		printf ("el aumento fue del 12%%, que equivale a %.0f:\n",valor);
		printf ("el nuevo salario de %s es de %.0f:\n",trabajador, neto);	
	}
	return 0;
}
