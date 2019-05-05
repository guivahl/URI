#include <stdio.h>

int main (){
	int cont,i;
	float v[6],media=0,num;
	for(i=0;i<6;i++){
		scanf("%f",&v[i]);
		if(v[i]>0){
			cont++;
			num+=v[i];
		}
	}
	media = num/ (1.0*cont);
	printf("%d valores positivos\n%.1	f",cont,media);
	return 0;
}
