#include <stdio.h>

int main (){
	float x,y;
	scanf("%f",&x);
	if(x<2000.01){
		printf("Isento\n");
	}
	else 
		if(x<3000.01){
			y = (x-2000.00)*(8.0/100.0);
			printf("R$ %.2f\n",y);
		}
		else 
			if(x<=4500.00){
				y = 1000.00*(8.0/100.0) + (x-3000.00)*(18.0/100.0);
				printf("R$ %.2f\n",y);
			}
			else if(x>4500.00){
				y = 1000.00*(8.0/100.0) + (1500.00)*(18.0/100.0)+(x-4500.00)*(28.0/100.0);
				printf("R$ %.2f\n",y);
			}
			 
	return 0;
}
