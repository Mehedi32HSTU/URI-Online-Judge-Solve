#include<stdio.h>
int main()
{
    int t_100,t_50,t_20,t_10,t_5,t_2,m_1,m_5,m_25,m_10,m_05,m_01;
    float N,t1,t2,t3,t4,t5,t6,m1,m2,m3,m4,m5;
    while(scanf("%f",&N)!=EOF){

             t_100=N/100;t1=N%100;t_50=t1/50;
             t2=t1%50;t_20=t2/20;
             t3=t2%20;t_10=t3/10;t4=t3%10;t_5=t4/5;
             t5=t4%5;t_2=t5/2;t6=t5%2;m_1=t6/1;
             m1=t6%1;m_5=m1/0.50;m2=m1%0.50;m_25=m2/0.25;m3=m2%0.25;
             m_10=m3/0.10;m4=m3%0.10;m_05=m4/0.05;m5=m4%0.05;m_01=m5/0.01;
        printf("NOTAS:\n%d nota(s) de R$ 100.00\n",t_100);
        printf("%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n",t_50,t_20);
        printf("%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n",t_10,t_5);
        printf("%d nota(s) de R$ 2.00\nMOEDAS:\n",t_2);
        printf("%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n",m_1,m_5);
        printf("%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n",m_25,m_10);
        printf("%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n",m_05,m_01);

    }
    return 0;
}

