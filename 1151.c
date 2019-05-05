#include <stdio.h>

int main(){
    int b=0,n,i,f[46] = {0,1};
    scanf("%d",&n);
    while(b<n-1){
        f[b+2]=f[b+1]+f[b];
        b++;
        printf("%d ",f[b-1]);
    }
    printf("%d\n",f[b]);
    return 0;
}

