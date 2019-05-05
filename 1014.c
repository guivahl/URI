#include <stdio.h>

 int main() {
    
    int distancia;
    float litros,total;
    
    scanf("%d %f", &distancia,&litros);
    
    total = distancia/litros;
    
    printf("%.3f km/l\n", total);
 
    return 0;
}
