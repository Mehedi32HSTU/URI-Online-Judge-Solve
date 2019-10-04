#include<stdio.h>
int main()
{
    int NUMBER,HOURS;
    float sps,SALARY;
    while(scanf("%d%d%f",&NUMBER,&HOURS,&sps)!=EOF){
        SALARY=HOURS*sps;
        printf("NUMBER = %d\n",NUMBER);
        printf("SALARY = U$ %.2f\n",SALARY);

    }
    return 0;
}


