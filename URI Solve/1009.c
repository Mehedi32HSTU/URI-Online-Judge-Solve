#include<stdio.h>
int main()
{
    char name[50];
    double fixed_salary,value_sold,TOTAL;
    while(scanf("%s%lf%lf",&name,&fixed_salary,&value_sold)!=EOF){
        TOTAL=fixed_salary+((value_sold*15)/100);
        printf("TOTAL = R$ %.2lf\n",TOTAL);
    }
    return 0;
}
