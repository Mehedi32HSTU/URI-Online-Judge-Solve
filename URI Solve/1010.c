#include<stdio.h>
int main()
{
    int p_code,p_unit[2],i;
    float p_price[2],total;
    for(i=0;i<2;i++){
        scanf("%d%d%f",&p_code,&p_unit[i],&p_price[i]);
        }
    total=p_unit[0]*p_price[0]+p_unit[1]*p_price[1];
    printf("VALOR A PAGAR: R$ %.2f\n",total);
    return 0;
}
