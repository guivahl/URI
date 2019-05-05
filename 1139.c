#include <stdio.h>
#include <stdlib.h>
#define ESTACAO -5;

int main (){
	int n_consultas,n_estacoes;
	long int const1=1,const2=1,n_pos = 1,j,i,x,y,flag,n_lin,n_col,lin_estacao[21],col_estacao[21],teste[51],linha,coluna;
	
	do{
		
	printf("Numero de linhas, colunas e estacoes: \n");
	scanf("%li %li %d",&n_lin,&n_col,&n_estacoes);
		
	if(!((n_lin==0)&&(n_col==0)&&(n_estacoes==0))){
	unsigned long int **mapa;
	
	mapa = malloc(sizeof(long int) * n_lin);
	
	for(i = 1; i <= n_col; i ++){
			mapa[i] = malloc(sizeof(long int) * n_col);
	}
/*	
	for(i = 1; i <= n_lin; i ++){
		for(j = 1; j <= n_col; j++){
			mapa[i][j] = 0;
		}
	}
*/	
	for(i = 1; i <= n_estacoes; i ++){
		printf("Posicao da linha e coluna da estacao de numero %li, total estacoes %d\n",i,n_estacoes);
		scanf("%li %li",&lin_estacao[i],&col_estacao[i]);
		mapa[lin_estacao[i]][col_estacao[i]] = ESTACAO;
	}
	
	// for geral
	do{
		
		for(i = 1; i <= n_lin;i++){ // for linhas
			for(j = 1; j <= n_col;j++){ // for colunas
				if(mapa[i][j]!= -5){
					for(x = -const1; x <=const1; x++){ // linhas na volta da posicao
						for (y = -const2; y <=const2; y++){ // colunas na volta da posicao
							if(mapa[i+y][j+x] == -5 && mapa[i][j]== 100){
								mapa[i][j] = n_pos;
								n_pos++;
							}
						}
					}
				}
			}
		}
	flag = 0;
		for(x = 1; x <= n_lin; x ++){
			for(y = 1; y <= n_col; y++){
				if((mapa[x][y])==100){
					flag++;
				}
			}
		}
		printf("\nFaltam %li posicoes\n",flag);
		
		const1++;
		const2++;	
	}while(flag!=0);
	
	// consultas
	printf("Digite o numero de consultas: ");
	scanf("%d",&n_consultas);
	for(x = 1; x<=n_consultas;x++){
		printf("Digite uma posicao: \n(Numero de posicoes totais %li)\n",(n_lin*n_col)-n_estacoes);
		scanf("%li",&teste[x]);
		for(i = 1; i <= n_lin;i++){
			for(j = 1; j <= n_col;j++){
				if(mapa[i][j] == teste[x]){		
					linha = i;
					coluna = j;
				}
			}
		}
		printf("A posicao %li esta na linha %li e coluna %li\n",teste[x],linha,coluna);
	}	
	}
	else{
	}
	printf("-");
	/*
	// print da matriz
	printf("\nMatriz: \n");
	for(i = 1; i <= n_lin; i ++){
		for(j = 1; j <= n_col; j++){
			printf("%d   ",mapa[i][j]);
		}
		printf("\n");
	}
	*/
	} while (!((n_lin == 0)&&(n_col==0)&&(n_estacoes==0)));
	return 0;
}
