#include<stdio.h>
int main()
{
    int N,i,x,ck,j;
    while(scanf("%d",&N)==1){
        for(i=0;i<N;i++){
           scanf("%d",&x);
           ck=1;
           if(x==1) ck=0;
           for(j=2;j<x;j++){
             if(x%j==0){
                ck=0;
                break;
             }
           }
           if(ck==1){
            printf("%d eh primo\n",x);
           }
           else printf("%d nao eh primo\n",x);
        }
    }
    return 0;
}


