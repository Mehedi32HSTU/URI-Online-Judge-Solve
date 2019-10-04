#include<stdio.h>
int main()
{
    int x,A,G,D;
    A=0;G=0;D=0;
    while(scanf("%d",&x)!=EOF){

        if(x==1) A++;
        else if(x==2) G++;
        else if(x==3) D++;
        if(x==4) break;
    }
    printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n",A,G,D);
    return 0;
}
