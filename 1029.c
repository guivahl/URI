#include <stdio.h>

int main (){
	
	long long int m, n, z = 1, w = 1,j,i,sum;
	int x = 1;
	
	while( scanf("%lld %lld",&m,&n) != EOF){
		
		
		for(i = 1; m > i; m--){
			w = w*m;
		}
		for(j = 1; n > j; n--){
			z = z*n;
		}
		sum = z + w;
		printf("%lld\n",sum);
		w = 1;
		z = 1;
	}
	
	return 0;
}


