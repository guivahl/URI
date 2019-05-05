#include <stdio.h>

int main (){
	int i,x;
	float y,m[] = {10000.00,5000.0,2000.0,1000.0,500.0,200.0,100.0,50.00,25.00,10.0,5.0,1.0};
	
	scanf("%f",&y);
	y*=100;
	printf("NOTAS:\n");
	for(i=0;i<12;i++) {
	x = (y/m[i]);
	y = y - x*m[i];
	
	if(i<6){
		printf("%d nota(s) de R$ %.2f\n",x,m[i]/100.0);
	}
	else{
		if(i==6)
			printf("MOEDAS:\n");
		printf("%d moeda(s) de R$ %.2f\n",x,m[i]/100.0);
	}
	} 
	return 0;
}
