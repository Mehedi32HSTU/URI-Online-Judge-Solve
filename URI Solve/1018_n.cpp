#include<stdio.h>

int main()
{
    long long n,x;
    int a,b,c,d,e,f,g;
    while(scanf("%lld",&n)==1)
    {
        x=n;
        if(n>0&&n<1000000)
        {
            a=n/100;
            n=n%100;
            b=n/50;
            n=n%50;
            c=n/20;
            n=n%20;
            d=n/10;
            n=n%10;
            e=n/5;
            n=n%5;
            f=n/2;
            n=n%2;
            g=n/1;
            n=n%1;

            printf("%lld\n",x);
            printf("%d nota(s) de R$ 100,00\n",a);
            printf("%d nota(s) de R$ 50,00\n",b);
            printf("%d nota(s) de R$ 20,00\n",c);
            printf("%d nota(s) de R$ 10,00\n",d);
            printf("%d nota(s) de R$ 5,00\n",e);
            printf("%d nota(s) de R$ 2,00\n",f);
            printf("%d nota(s) de R$ 1,00\n",g);

        }
    }
    return 0;
}
