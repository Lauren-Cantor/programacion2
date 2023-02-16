#include <stdio.h>

int main(){
	
	float metros, kilometros, centimetros;
	printf ("escriba la medida en metros: ");
	scanf ("%f", &metros);
	
	kilometros= metros/1000;
	centimetros= metros*100;
	
	printf ("En kilometros es : %f y en centimetros es : %f",kilometros,centimetros);
	
	return 0;
}
