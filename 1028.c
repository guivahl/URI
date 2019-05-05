#include <stdio.h>

main (){
	int n,f1,f2,maior,i,j;
	
	scanf("%d",&n);
	for(j=0;j<n;j++){
	
		scanf("%d%d",&f1,&f2);
	
		for(i = 1; i <= 1000; i++){
			if(( (f1 % i)== 0) && ((f2 % i) == 0) )
				maior = i;
		}
		printf("%d\n",maior);
		n--;
	}
}
