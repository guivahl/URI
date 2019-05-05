#include <stdio.h>

int main (){
	unsigned long int a,x,y;
	
	while(scanf("%lu%lu",&x,&y)!= EOF){ 
	    a = x ^ y;
	    printf("%lu\n",a);
	}
	return 0;
}
