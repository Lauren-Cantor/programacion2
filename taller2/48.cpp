#include <stdio.h>
int main(){
	int aux=0;
	for(int i=1; i<=5; i++){
		for(int j=0; j<2; j++){
			printf("%d   %d\n", aux, i);
			aux++	;						
		}
	}		
}
