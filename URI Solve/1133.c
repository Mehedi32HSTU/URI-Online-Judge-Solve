#include<stdio.h>
int main()
{
    int X,Y,t,r,i;
    while(scanf("%d%d",&X,&Y)!=EOF){
        if(X>Y){
         t=X;X=Y;Y=t;
        }
        for(i=X+1;i<Y;i++){
            r=i%5;
            if(r==2||r==3){
              printf("%d\n",i);
            }
        }
    }
    return 0;
}
