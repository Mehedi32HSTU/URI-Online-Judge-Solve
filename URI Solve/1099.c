#include<stdio.h>
int main()
{
    int N,X,Y,i,j,t,sum;
    while(scanf("%d",&N)==1){
        for(i=0;i<N;i++){
        sum=0;
         scanf("%d%d",&X,&Y);
         if(X>Y){
            t=X;X=Y;Y=t;
         }
         for(j=X+1;j<Y;j++){
            if(j%2!=0){
                sum=sum+j;
            }
         }
         printf("%d\n",sum);
      }

    }
    return 0;
}
