#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int N[x],n[x],t,i,s;
    for(i=0;i<x;i++)
        scanf("%d",&N[i]);
        t=N[0];
    for(i=0;i<x;i++)
        n[i]=N[i];
    for(i=0;i<x;i++){
        if(t>N[i])
            t=N[i];
    }
    for(i=0;i<x;i++){
        if(t==n[i]) break;
    }
    printf("Menor valor: %d\nPosicao: %d\n",t,i);
    return 0;
}
