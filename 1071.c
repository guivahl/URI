#include <stdio.h>

int main(){
	int x,y,cont=0;
	 scanf("%d %d",&x,&y);
	
	if(x>y){
		x--;
		y++;
		while(x>=y){
			if((y%2)!=0){
				cont+=y;
			}	
			y++;
		}
	}
	else if (x<y){
		x++;
		y--;
		while(x<=y){
			if((x%2)!=0){
				cont+=x;
			}
			x++;
		}
	}
	printf("%d\n",cont);
    return 0;
}
