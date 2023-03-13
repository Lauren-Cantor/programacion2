#include <stdio.h>
int main(){
	int aux=0;
	for(int i=1; i<=2; i++){
		for(int j=0; j<4; j++){
			printf("%d   %d\n", aux, i);
			aux++	;						
		}
	}		
}
