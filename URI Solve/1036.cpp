#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,r1,r2,d;
    while(scanf("%lf%lf%lf",&a,&b,&c)!=EOF){
         d=((b*b)-(4*a*c));
        r1=((-b)+sqrt(d))/(2*a);
        r2=((-b)-sqrt(d))/(2*a);
        if(a!=0 && d>0){
            printf("R1 = %.5lf\n",r1);
            printf("R2 = %.5lf\n",r2);
        }
        else{
           printf("Impossivel calcular\n");
        }
    }
    return 0;
}
