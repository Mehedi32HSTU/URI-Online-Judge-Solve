#include<stdio.h>
int main()
{
    int A,N,i,sum;
    scanf("%d%d",&A,&N);
        while(1){
            if(N<=0)
            scanf("%d",&N);
        else break;
        }
        sum=0;
        for(i=0;i<N;i++){

            sum=sum+A;
            A++;
        }
        printf("%d\n",sum);
    return 0;
}
