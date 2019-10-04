#include<stdio.h>
int main()
{
    int X,Z,i,sum;
    while(scanf("%d%d",&X,&Z)==2){
        sum=0;
        if(Z<=X){
            while(Z<=X){
                scanf("%d",&Z);
            }
        }
        for(i=X;i<=Z;i++){
            sum=sum+i;
            if(sum>=Z) break;
        }
        printf("%d\n",i+1-X);
    }
    return 0;
}
