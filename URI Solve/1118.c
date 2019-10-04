#include<stdio.h>
int main()
{
    float a,b,m;
    int X;
    while(1)
    {
        scanf("%f",&a);
        while(1)
        {
            if(a<0||a>10)
            {
                printf("nota invalida\n");
                scanf("%f",&a);
            }
            else break;
        }
        scanf("%f",&b);
        while(1)
        {
            if(b<0||b>10)
            {
                printf("nota invalida\n");
                scanf("%f",&b);
            }
            else break;
        }
        m=(a+b)/2;
        printf("media = %.2f\n",m);
        scanf("%d",&X);
        while(1){
            if(X==2){
                printf("novo calculo (1-sim 2-nao)\n");
                return 0;
            }
            else if(X!=1){
               printf("novo calculo (1-sim 2-nao)\n");
               scanf("%d",&X);
            }
            else{
                printf("novo calculo (1-sim 2-nao)\n");
                break;
            }
        }

    }
    return 0;
}
