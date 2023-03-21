#include <stdio.h>
#include <math.h>

int redondear () {
float a;
char b ;
printf ("ingrese numero: ");
scanf ("%f", &a);
printf ("escriba adelante si desea que su aproximacion sea hacia adelante de lo contrario escriba atras: ");
scanf ("%c", &b);

if (b==atras){
a= long (a);
return a;
} else {
a= round (a);
return a;
}	
}
int main (){
printf ("%f", redondear());	
}

