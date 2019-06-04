#include <stdio.h>

int main (){
	int n,i,j,ind1 = 0,ind2 = 0;
	int v1[5],v2[5];
	for(i=0;i<15;i++){
		scanf("%d", &n);
		if(n%2==0){
			if(ind1>4){
				for(j=0;j<5;j++){
					printf("par[%d] = %d\n",j,v1[j]);
					v1[j] = 0;
				}
				ind1 = 0;
			}
			v1[ind1] = n;
			ind1++;
		}
		else{
			if(ind2>4){
				for(j=0;j<5;j++){
					printf("impar[%d] = %d\n",j,v2[j]);
					v2[j] = 0;
				}
				ind2 = 0;
			}
			v2[ind2] = n;
			ind2++;
		}
	}
	for(i=0;i<ind2;i++){
		printf("impar[%d] = %d\n",i,v2[i]);
	}
	for(i=0;i<ind1;i++){
		printf("par[%d] = %d\n",i,v1[i]);
	}
	return 0;
}
