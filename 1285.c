#include <stdio.h>

int main(){
	int i,m,n,j=0,x=10,aux2,v[3],c=0,d=0,s,p;
	char url[] ="1285.txt";;
	FILE *arq;
	arq = fopen(url,"r");
	while(fscanf(arq,"%d %d",&n,&m)==2){

		for(i = n;i<=m;i++){
			p = 0;
			aux2 = i;
			while(aux2>9){		
				v[j] = aux2 % x;
				aux2 = aux2 / x;
				j++;	
			}
			v[j] = aux2;
			for(d=0; d<=j;d++){
				for(s=d+1;s<=j;s++){
					if(v[d]==v[s]){
						p = 1;
					}
				}
			}	
			if(p==0){
				c++;
			}
			j = 0;
		}
		printf("%d\n",c);
		c = 0;
	}
	fclose(arq);
	return 0;
}
