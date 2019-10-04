#include<stdio.h>
int main()
{
    float a,b,m;
    scanf("%f",&a);
    while(1){
        if(a<0||a>10){
            printf("nota invalida\n");
            scanf("%f",&a);
        }
        else break;
    }
    scanf("%f",&b);
    while(1){
        if(b<0||b>10){
            printf("nota invalida\n");
            scanf("%f",&b);
        }
        else break;
    }
    m=(a+b)/2;
    printf("media = %.2f\n",m);
    return 0;
}
