#include<stdio.h>

int main (){
	
	int num, num1, num2, num3;
	
	printf ("ingrese un numero de tres digitos: ");
	scanf ("%d", &num);
	
	num1= (num/100)%10;
	num2= (num/10)%10;
	num3= num%10;
	
	if(num1==1 || num2==1 || num3==1){
		
	printf ("el numero ingresado contiene el digito 1");
	}else{
	printf ("el numero ingresado NO contiene el digito 1");	
	}
	}
