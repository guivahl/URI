#include <stdio.h>
#include <math.h>

int main() {
     
     float x1,y1,x2,y2,x,y,distancia;
     
     scanf("%f %f %f %f", &x1,&y1,&x2,&y2);
     
     x=x2-x1;
     y=y2-y1;
     
     distancia = sqrt(x*x+y*y);
     
     printf("%.4f\n", distancia);
 
    return 0;
}
