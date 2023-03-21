# include <stdio.h>

int deCaracterANumero(){
char a  [1];
printf ("ingrese una letra: ");
scanf ("%c", &a);
return *a;

}
int main (){	
printf ("numer ASCII: %d",deCaracterANumero());
	
}
