#include<stdio.h>
int main()
{
    int I,G,i,g,x,d,m;
    i=0;g=0;m=0;d=0;
    while(1){
        scanf("%d%d",&I,&G);
        printf("Novo grenal (1-sim 2-nao)\n");
        if(I>G) i++;
        else if(I<G) g++;
        else if(I==G) d++;
        m++;
        scanf("%d",&x);
        if(x!=1) break;
    }
    printf("%d grenais\n",m);
    printf("Inter:%d\nGremio:%d\nEmpates:%d\n",i,g,d);
    //printf("Gremio:%d\n",g);
    //printf("Empates:%d\n",d);
    if(g==i) printf("Nao houve vencedor\n");
    else if(i>g) printf("Inter venceu mais\n");
    else if(i<g) printf("Gremio venceu mais\n");
    return 0;
}
