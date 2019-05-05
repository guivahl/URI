#include <stdio.h>
#include <math.h>

int main(int argc, char **argv)
{
	double z,x;
	double a,b,c,delta;
	scanf("%lf %lf %lf",&a,&b,&c);
	delta = sqrt((pow(b,2))-(4*(a)*(c)));

	z = (-b+delta)/(2.0*a);
	x = (-b-delta)/(2.0*a);

	if ((a==0.0)|| (((pow(b,2))-(4*(a)*(c)))<0)){
		printf("Impossivel calcular\n");
	}
	else
		printf("R1 = %.5lf\nR2 = %.5lf\n",z,x);
	return 0;
}


