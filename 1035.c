#include <stdio.h>
 
int main() {
     int a,b,c,d,x,y,z;
     scanf("%d %d %d %d",&a,&b,&c,&d);
     z=a+b;
     x=c+d;
     if(b>c&&d>a&&x>z&&(c&&d)>=0&&a%2==0)
         printf("Valores aceitos\n");
     else
         printf("Valores nao aceitos\n");
     
    return 0;
}
