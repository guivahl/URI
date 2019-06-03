#include <stdio.h>

int main (){
	
	int n,i,x;
	int v[20];
	
	for(i=0;i<20;i++){
		scanf("%d",&n);
		v[i] = n;
	}
	for(x=0,i--;i>=0;i--,x++){
		printf("N[%d] = %d\n",x,v[i]);
	}
	return 0;
}
