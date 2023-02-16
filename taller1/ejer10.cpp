#include <stdio.h>

int main(){
	float kilobytes, gigabytes, bites;
	printf ("escriba la peso en kilobytes: ");
	scanf ("%f", &kilobytes);
	
	gigabytes = kilobytes/1000000;
	bites= kilobytes*1024;
	
	printf ("En Gigabytes es : %f y en bites es : %f",gigabytes,bites);
	return 0;
}
