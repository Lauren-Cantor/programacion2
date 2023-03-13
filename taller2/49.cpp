#include <stdio.h>
int main(){
	int aux=1;
	for(int i=1; i<=3; i++){
		for(int j=0; j<1; j++){
			for(int k=1; k<=3; k++){
				printf("%d   %d   %d\n", aux, i, k);
				aux++;				
			}												
		}
	}		
}
