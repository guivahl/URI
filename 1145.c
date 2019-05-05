#include <stdio.h>

int main (){
	int x,i,y,somador = 1;
	scanf("%d %d",&x,&y);
	for(i=1;i<=y;i++){
		if(somador == x){
			printf("%d\n",i);
			somador = 1;
		}
		else{
			printf("%d ",i);
			somador++;
		}
	}
	return 0;
}
