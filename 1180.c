#include <stdio.h>

int main(){
	int n,i,indice,menor;
	scanf("%d ",&n);
	
	int x[n];
	
	for(i=0;i<n;i++){
		scanf("%d", &x[i]);
		if(i==0){
			menor = x[i];
			indice = i; 	
		}	
		else 
			if(menor > x[i]){
				menor = x[i];
				indice = i; 
			}
	}
	printf("Menor valor: %d\nPosicao: %d\n", menor, indice);
	return 0;
	}

