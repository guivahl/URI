#include <stdio.h>

int main(int argc, char **argv)
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if((a>b)&&(b<=c)){
		printf(":)\n");
	}
	else if((a<b)&&(b>=c)){
		printf(":(\n");	
	}
		else if ((b>a&&c>b)&&((b-a)>(c-b))){
				printf(":(\n");
		}
			else if((b>a&&c>b)&&((b-a)<=(c-b))){
					printf(":)\n");
				}
				else if((b<a&&c<b)&&((a-b)>(b-c))){
						printf(":)\n");
					}
					else if((b<a&&c<b)&&((a-b)<=(b-c))){
						printf(":(\n");
					}
						else if(a==b){
								if(b<c){
									printf(":)\n");	
								}
								else if(b>=c){
										printf(":(\n");
									}
							}
	 return 0;
}

