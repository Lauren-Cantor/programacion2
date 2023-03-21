# include <stdio.h>

int Numero(){
	
int num;
printf ("ingrese un numero: ");
scanf ("%d", &num);
	if (num<=255){
	return 0;
	} else {
	return 1;
	}
 
}
int main (){
printf ("%d",Numero());
	
}
