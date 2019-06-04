#include <stdio.h>

int main()
{
	int t,i,z=0;
	
	scanf("%d",&t);
	
	for(i=0;i<1000;i++){
		if(z==t)
			z = 0;
		printf("N[%d] = %d\n",i,z);
		z++;	
	}
	return 0;
}


