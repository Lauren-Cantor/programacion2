#include <stdio.h>

int main (){
	int num=60, total;
	
	for (int i=1; i<=num; i++){
		
	if (i%3==0){
		total+=i;
		
	}
	}
	printf ("%d\n",total);
}
