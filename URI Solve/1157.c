#include<stdio.h>
int main()
{
    int N,i;
    while(scanf("%d",&N)==1){
        for(i=1;i<=N;i++){
            if(N%i==0){
                printf("%d\n",i);
            }
        }
    }
    return 0;
}
