#include <stdio.h>

long long int quadradoperf(long long int x){
	long long i,s=0;
	for(i=1;i<x;i++){
		if(x%i==0){
			s += i;
		}
	}
	if(s==x)
		return 1;
	else
		return 0;
}

int main(){
	long long x;
	int i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%lld",&x);
		if(quadradoperf(x)){
			printf("%lld eh perfeito\n",x);
		}
		else{
			printf("%lld nao eh perfeito\n",x);
		}
	}

	return 0;
}
