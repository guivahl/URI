#include <stdio.h>

int main(int argc, char **argv)
{
	int a,b;
	scanf("%d %d",&a,&b);
	if(a == b){
		printf("%d\n",a);
	}
	else if(a>b){
			printf("%d\n",a);
		}
		else if(b>a){
			printf("%d\n",b);
		}
	return 0;
}


