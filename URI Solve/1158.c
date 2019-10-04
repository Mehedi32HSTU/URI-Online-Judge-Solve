#include<stdio.h>
int main()
{
    int N,X,Y,i,j,sum;
    while(scanf("%d",&N)==1){

        for(i=0;i<N;i++){
            sum=0;
            scanf("%d%d",&X,&Y);
            for(j=0;j<Y;j++){
                if(X%2==0){
                    X=X+1;
                }
                sum=sum+X;
                X=X+2;
            }
            printf("%d\n",sum);
        }
    }
    return 0;
}
