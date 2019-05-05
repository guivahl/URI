#include <stdio.h>

int main () {
	int cont = 0,calc,flag = 1;
	float x,y[2];
	do{
		do {	
			scanf("%f",&x);
			if(x>=0&&x<=10){
				y[cont] = x;
				cont++;
			}
			else{
				printf("nota invalida\n");
			}
		} while(cont != 2);
	
		printf("media = %.2f\n", (y[0] + y[1])/2);
		
		do{
		printf("novo calculo (1-sim 2-nao)\n");
		scanf("%d",&calc);
		} while(calc<1||calc>2);
		cont = 0;
		y[0] = 0;
		y[1] = 0;
	}while(calc !=2);
	return 0;
}
