#include<stdio.h>
int main()
{
    float A,B,C,D;
    while(scanf("%f%f%f",&A,&B,&C)!=EOF){
        D=(A*2+B*3+C*5)/(2+3+5);
        printf("MEDIA = %.1f\n",D);
    }
    return 0;
}

