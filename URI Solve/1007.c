#include<stdio.h>
int main()
{
    int DIFERENCA,A,B,C,D;
    while(scanf("%d%d%d%d",&A,&B,&C,&D)!=EOF){
        DIFERENCA=(A*B-C*D);
        printf("DIFERENCA = %d\n",DIFERENCA);
    }
    return 0;
}
