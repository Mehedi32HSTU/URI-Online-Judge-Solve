#include<stdio.h>
#include<math.h>
int main()
{
    double A,B,C,d,R1,R2;
    while(scanf("%lf%lf%lf",&A,&B,&C)!=EOF){
        d=B*B-4*A*C;
        R1=(-B+sqrt(d))/(2*A);
        R2=(-B-sqrt(d))/(2*A);
        if(A!=0&&d>=0){
            printf("R1 = %.5lf\nR2 = %.5lf\n",R1,R2);
        }
        else printf("Impossivel calcular\n");
    }
    return 0;
}
