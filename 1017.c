#include <stdio.h>
 
int main() {
     
     int tempo,velmedia;
     float litros;
     scanf("%d %d", &tempo,&velmedia);
     
     litros=(tempo*velmedia)/12.0;
        printf("%.3f\n", litros);
      
    return 0;
}
