#include<stdio.h>
int main()
{
    int N,i,x,sum,j;
    while(scanf("%d",&N)==1){
        for(i=0;i<N;i++){
           scanf("%d",&x);
           sum=0;
           for(j=1;j<x;j++){
            if(x%j==0){
                sum=sum+j;
            }
           }
           if(sum==x){
            printf("%d eh perfeito\n",x);
           }
           else printf("%d nao eh perfeito\n",x);
        }
    }
    return 0;
}

