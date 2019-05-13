#include <stdio.h>
#define PAR(x) ((x%2)==0)

int main(){
	int i;
	for(i=1;i<=100;i++){
		if(PAR(i)){
			printf("%d\n",i);
		}
	}
	return 0;
}
