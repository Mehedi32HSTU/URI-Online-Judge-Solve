#include<stdio.h>
int main()
{
    float m,e,y,t,t1,t2,t3;
    while(scanf("%f",&m)==1){
            t1=0;t2=0;t3=0;
        if(m>0&&m<=2000){
            printf("Isento\n");
              }
        else{
            if(m>4500){
                e=m-4500;
                t1=e*.28;
                m=m-e;
               }
            if(m>3000){
                e=m-3000;
                t2=e*.18;
                m=m-e;
               }
            if(m>2000){
                e=m-2000;
                t3=e*.08;
               }
               t=t1+t2+t3;
            printf("R$ %.2f\n",t);
        }
    }
        return 0;
 }
