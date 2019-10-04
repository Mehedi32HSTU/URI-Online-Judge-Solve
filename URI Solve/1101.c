#include<stdio.h>
int main()
{
    int M,N,Sum,i,t;
    while(scanf("%d%d",&M,&N)!=EOF){
        Sum=0;
        if(M<=0||N<=0){
            break;
        }
        else{
            if(M>N){
                t=M;M=N;N=t;
            }
            for(i=M;i<=N;i++){
                printf("%d ",i);
                Sum=Sum+i;
            }
            printf("Sum=%d\n",Sum);
        }
    }
    return 0;
}
