#include <stdio.h>
#include <ctype.h> 

int main(void) {
 char a;

 printf("Ingrese una letra: ");
 scanf("%c", &a);

 a = tolower(a);
 printf("La letra en mayuscula: %c\n", a);

return 0;
}
