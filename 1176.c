#include <stdio.h>

int main(){
    long long int b=0,n,i,f[60] = {0,1};
    scanf("%lld ", &i);
    while(i>0){
	
	scanf("%lld",&n);
  	if(n>0){
	  	while(b<n-1){
  	  	  f[b+2]=f[b+1]+f[b];
  	 	   b++;
  		}
   		printf("Fib(%lld) = %lld\n",n,f[b+1]);
   	}
   	else
   		printf("Fib(%lld) = %lld\n",n,f[b]);
   	b = 0;	
   	i--;	
   }
    return 0;
}

