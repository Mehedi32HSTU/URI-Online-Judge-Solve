#include<stdio.h>
int main()
{
    int X=60,Y=90,n,d;
    while(scanf("%d",&n)!=EOF){
        d=(X*n)/(Y-X);
        printf("%d minutos\n",d);
    }
    return 0;
}
