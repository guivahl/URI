#include <stdio.h>

long long int fatorial(int x){
	long long int y;
	if(x<=1)
		return 1;
	else{
		y = x * fatorial(x-1);
		return y;
	}		
	
}

int main (){
	long long int m,n;
	while(scanf("%lld %lld",&m,&n)!=EOF){
		printf("%lld\n",fatorial(m)+fatorial(n));
	}
	return 0;
}
