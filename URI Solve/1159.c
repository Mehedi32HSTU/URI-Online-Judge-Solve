#include<stdio.h>
int main()
{
    int sum,X,i;
    while(scanf("%d",&X)==1){
        if(X==0) break;
        sum=0;
        for(i=0;i<5;i++){
            if(X%2!=0){
                X=X+1;
            }
            sum=sum+X;
            X=X+2;
        }
        printf("%d\n",sum);
    }
    return 0;

}
