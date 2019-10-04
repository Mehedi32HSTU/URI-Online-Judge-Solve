#include<stdio.h>
int main()
{
    double A,B,C,pi=3.14159,TRIANGULO,CIRCULO,TRAPEZIO,QUADRADO,RETANGULO;
    while(scanf("%lf%lf%lf",&A,&B,&C)!=EOF){
        TRIANGULO=(A*C)/2;CIRCULO=pi*C*C;TRAPEZIO=(C*(A+B))/2;
        QUADRADO=B*B;RETANGULO=A*B;
        printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",TRIANGULO,CIRCULO,TRAPEZIO,QUADRADO,RETANGULO);
    }
    return 0;
}
