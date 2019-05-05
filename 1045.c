#include <stdio.h>

int main(int argc, char **argv)
{
	float a,b,c,aux;
	scanf("%f %f %f",&a,&b,&c);
	if(b>c&&b>a){
		aux = a;
		a = b;
		b = aux;
	}
	else if(c>a&&c>b){
		aux = a;
		a = c;
		c = aux;	
	}
	if(a>=(b+c))
		printf("NAO FORMA TRIANGULO\n");
	else{
		if(a*a==(b*b+c*c))
			printf("TRIANGULO RETANGULO\n");
		if(a*a>(b*b+c*c))	
			printf("TRIANGULO OBTUSANGULO\n");
		if(a*a<(b*b+c*c))
			printf("TRIANGULO ACUTANGULO\n");
		if((a==b)&&(b==c))
			printf("TRIANGULO EQUILATERO\n");
		if( ((a==b)&&(b!=c)) || ((b==c)&&(b!=a)) || ((c==a)&&(c!=b)) )
			printf("TRIANGULO ISOSCELES\n");	
	}
	return 0;
}


