#include <stdio.h>


int main (){
    int horaInicial, minutoInicial, horaFinal, minutoFinal,totalHora,totalMinuto;
    scanf("%d%d%d%d",&horaInicial,&minutoInicial,&horaFinal,&minutoFinal);

    if ((horaFinal == horaInicial)){
        if(minutoFinal < minutoInicial){
            totalHora = 23;
        }
        else {
            if(minutoFinal == minutoInicial){
                totalHora = 24;
            }
            else if (minutoFinal > minutoInicial){
                totalHora = 0;
            }
        }
    }
    else
        if (horaFinal > horaInicial){
            if((horaFinal - horaInicial)&&(minutoFinal < minutoInicial)) 
                totalHora = 0;
            else
                totalHora = horaFinal - horaInicial;
        }
        else
            if((horaFinal - horaInicial) < 0){
                totalHora = 24 - (horaInicial - horaFinal);
            }

    if (minutoFinal == minutoInicial){
        totalMinuto = 0;
    }
    else
        if((minutoFinal - minutoInicial) < 0){
            totalMinuto = 60 - (minutoInicial- minutoFinal);
        }
        else{
            totalMinuto = minutoFinal - minutoInicial;
        }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)",totalHora,totalMinuto);

    return 0;
}

