#include <stdio.h>
#include <stdlib.h>

int menu(){
	int opcion;
	printf("1. Leer datos\n");
	printf("2. Sumar datos\n");
	printf("3. Cuadrado de los datos\n");
	printf("4. Promedio de los datos\n");
	printf("5. Salir\n");
	printf("Ingrese una opcion: ");
	scanf("%d", &opcion);
	return opcion;
}

void leerDatos(int vector[]){
	int numero;
	for(int i=0; i<10; i++){
		printf("Ingeres el dato numero %d:", i+1);
		scanf("%d", &numero);
		vector[i]=numero;
	}	
}

void sumar(int vector[]){
	int suma=0;
	for(int i=0; i<10; i++){
		suma+=vector[i];					
	}
	printf("El total de la suma es: %d\n", suma);
}

void cuadrado(int vector[], int vector2[]){
	for(int i=0; i<10; i++){
		vector2[i]=vector[i]*vector[i];
		printf("El cuadrado de %d es: %d\n", vector[i], vector2[i]);									
	}
}

void promedio(int numeros[], int potencia[], int promedio[]){
	for(int i=0; i<10; i++){
		promedio[i]=(numeros[i]+potencia[i])/2;
		printf("El promedio entre %d y %d es: %d\n", numeros[i], potencia[i], promedio[i]);									
	}
}

int main(){
	int opcion;
	int vector[10];
	int vector2[10];
	int vector3[10];	
	do{
		opcion=menu();
		switch(opcion){
			case 1:
				leerDatos(vector);
				break;			
			case 2:	
				sumar(vector);			
				break;
			case 3:
				cuadrado(vector, vector2);
				break;
			case 4:
				promedio(vector, vector2, vector3);
				break;
			case 5:	
				break;
			default:
				printf("Ingrese una opcion valida!!\n");
		}
		system("pause");	
		system("cls");		
	}while(opcion!=5);
}
