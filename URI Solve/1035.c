#include<stdio.h>
int main()
{
    int A,B,C,D,X,Y;
    while(scanf("%d%d%d%d",&A,&B,&C,&D)!=EOF){
            Y=C+D;X=A+B;
        if(B>C&&D>A&&Y>X&&C>=0&&D>=0&&A%2==0){
            printf("Valores aceitos\n");

        }
        else
            printf("Valores nao aceitos\n");
    }
    return 0;
}
