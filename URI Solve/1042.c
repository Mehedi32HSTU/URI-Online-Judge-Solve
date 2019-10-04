#include<stdio.h>
int main()
{
    int x1,x2,x3,a,b,c,t;
    while(scanf("%d%d%d",&x1,&x2,&x3)==3){
        a=x1;b=x2;c=x3;
        if(x1>x2){
            t=x1;x1=x2;x2=t;
            if(x1>x3){
                t=x1;x1=x3;x3=t;
                if(x2>x3){
                    t=x2;x2=x3;x3=t;
                }
            }
            if(x2>x3){
                    t=x2;x2=x3;x3=t;
                }
        }
        else{
            if(x1>x3){
                t=x1;x1=x3;x3=t;
                if(x2>x3){
                    t=x2;x2=x3;x3=t;
                }
            }
            if(x2>x3){
                    t=x2;x2=x3;x3=t;
                }
        }
        printf("%d\n%d\n%d\n",x1,x2,x3);
        printf("\n");
        printf("%d\n%d\n%d\n",a,b,c);
    }
    return 0;
}
