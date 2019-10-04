#include<stdio.h>
int main()
{
    float A,B,C,D;
    while(scanf("%f%f%f",&A,&B,&C)!=EOF){
        if(A+B>C&&A+C>B&&B+C>A){
            D=A+B+C;
            printf("Perimetro = %.1f\n",D);
        }
        else{
            D=((A+B)*C)/2;
            printf("Area = %.1f\n",D);
        }
    }
    return 0;
}
