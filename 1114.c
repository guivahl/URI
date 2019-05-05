#include <stdio.h>

int main(){
    int x = 0,y;
    while(x==0){
        scanf("%d",&y);
        if(y == 2002){
            printf("Acesso Permitido\n");
            x = 1;
        }
        else {
            printf("Senha Invalida\n");
        }
    }
    return 0;
}

