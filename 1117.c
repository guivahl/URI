#include <stdio.h>

int main () {
	int cont = 0;
	float x,y[2];
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
	return 0;
}
