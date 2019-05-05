 #include <stdio.h>
 
int main() {
   
    double raio, total;
 
    scanf("%lf", &raio);
    
    total = (4.0/3)*3.14159*raio*raio*raio;
    
    printf("VOLUME = %.3lf\n", total);
 
    return 0;
}
