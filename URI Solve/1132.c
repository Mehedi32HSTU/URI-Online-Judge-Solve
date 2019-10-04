#include<stdio.h>
int main()
{
    int X,Y,t,i,sum;
    while(scanf("%d%d",&X,&Y)!=EOF){
        if(X>Y){
            t=X;X=Y;Y=t;
        }
        sum=0;
        for(i=X;i<=Y;i++){
            if(i%13!=0){
                sum=sum+i;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}
