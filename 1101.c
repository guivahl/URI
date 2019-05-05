#include <stdio.h>

int main (){
    int m,n,aux,i,s;
    scanf("%d %d",&m,&n);
    while(m>0&&n>0){
        if(n>m){
            aux = m;
            m = n;
            n = aux;
        }
        for(i=n;i<=m;i++){
            printf("%d ",i);
        }
        s = (m+n)*(m-n+1)/2;
        printf("Sum=%d\n",s);
        scanf("%d %d",&m,&n);
    }
    return 0;
}

