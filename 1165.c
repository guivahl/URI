#include <stdio.h>

long long int testaprimo(long long int x){
	long long int i;
	for(i=2;i<x;i++){
		if(x%i==0){
			return 0;
		}
	}
	return 1;
}
int main(){
	long long int n,x;
	int i;
	scanf("%lld",&n);
	for(i=0;i<n;i++){
		scanf("%lld",&x);
		if(testaprimo(x)){
			printf("%lld eh primo\n",x);
		}
		else{
			printf("%lld nao eh primo\n",x);
		}
	}
	return 0;
}
