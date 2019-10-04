#include<stdio.h>
int main()
{
    int N,t_100,t_50,t_20,t_10,t_5,t_2,t_1;
    int t1,t2,t3,t4,t5,t6;
    while(scanf("%d",&N)==1){

             t_100=N/100;t1=N%100;t_50=t1/50;
             t2=t1%50;t_20=t2/20;
             t3=t2%20;t_10=t3/10;t4=t3%10;t_5=t4/5;
             t5=t4%5;t_2=t5/2;t6=t5%2;t_1=t6/1;
        printf("%d\n%d nota(s) de R$ 100,00\n",N,t_100);
        printf("%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n",t_50,t_20);
        printf("%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n",t_10,t_5);
        printf("%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n",t_2,t_1);
    }
    return 0;
}
