#include<stdio.h>
int main()
{
    int i,X,n=0;
    while(scanf("%d",&X)!=EOF){
        if(X>=1&&X<=1000){
            for(i=1;i<=X;i++){
                if(i%2!=0) printf("%d\n",i);
            }
        }
    }
    return 0;
}
