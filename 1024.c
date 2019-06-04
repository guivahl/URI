#include <stdio.h>
#include <string.h>
#define INTMAX 1000

int main (){
	int x,n,tam;
	int i,j;
	char s[INTMAX];
	
	scanf("%d ", &n);
	
	for(x=0;x<n;x++){
		fgets(s,INTMAX,stdin);
		tam = strlen(s);
		for(i=0;i<tam;i++){
			if((s[i]>64&&s[i]<91)||(s[i]>96&&s[i]<123)){
				s[i]+=3;
			}
		}
		for(i=0;i<(tam/2);i++){
			s[i]-=1;
		}
		for(i=tam-2;i>=0;i--){
			printf("%c",s[i]);
		}
		printf("\n");
	}
	return 0;
}
