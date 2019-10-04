#include<stdio.h>
int main()
{
    int t_days,years,months,days1,days;
    while(scanf("%d",&t_days)!=EOF){
        years=t_days/365;days1=t_days%365;
        months=days1/30;days=days1%30;
        printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",years,months,days);

    }
    return 0;

}
