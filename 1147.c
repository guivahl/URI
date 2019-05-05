#include <stdio.h>
#define cavalo 2
#define peoes 1
int main (){
	int cont,j,i,tabuleiro[8][8];
	int y=1,var_col[4] = {2,1,-1,-2}, var_lin[4]={2,1,-1,-2};
	int linha_cavalo,coluna_cavalo,linha_peao,coluna_peao,aux_lin,aux_col;
	char cav[2],peao[2];
	
	scanf("%s",cav);
	
	while(cav[0]!=48){
		cont = 8;
		for(i = 0; i<=7; i++){
			for(j = 0; j<= 7; j++){
				tabuleiro[i][j] = 0;
			}
		}
		if(cav[1]>96){
			coluna_cavalo = cav[1]-97;
			linha_cavalo = cav[0]-49;
		}
		else {
			coluna_cavalo = cav[0]-97;
			linha_cavalo = cav[1]-49;
		}
		tabuleiro[linha_cavalo][coluna_cavalo] = cavalo;
		
			for(i=0;i<=7;i++){
				scanf("%s",peao);
				
				if(peao[1]>96){
				coluna_peao = peao[1]-97;
				linha_peao = peao[0]-49;
				}
				else {
					coluna_peao = peao[0]-97;
					linha_peao = peao[1]-49;
				}
				tabuleiro[linha_peao][coluna_peao] = peoes;
			}
				for(i=0;i<=3;i++){
					aux_lin = linha_cavalo+var_lin[i];
					for(j=0;j<=3;j++){
						aux_col = coluna_cavalo+var_col[j];
						if(var_lin[i]==var_col[j]||var_lin[i]==(-1*var_col[j])){
						}
						else {
							if(aux_lin<0||aux_lin>7||aux_col<0||aux_col>7){
								cont--;
							}
							else{
								if((tabuleiro[aux_lin+1][aux_col+1]==peoes)||(tabuleiro[aux_lin+1][aux_col-1]==peoes)){
									cont--;
								}
							}
						}
					}
				}
		
		printf("Caso de Teste #%d: %d movimento(s).\n",y,cont);
		y++;
		scanf("%s",cav);
	}
	
	return 0;
}

