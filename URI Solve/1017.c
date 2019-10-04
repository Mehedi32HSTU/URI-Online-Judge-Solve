#include<stdio.h>
int main()
{
    int sp=12,t,v;
    double s,d;
    while(scanf("%d%d",&t,&v)!=EOF){
        s=v*t;
        d=s/sp;
        printf("%.3lf\n",d);
    }
    return 0;
}
