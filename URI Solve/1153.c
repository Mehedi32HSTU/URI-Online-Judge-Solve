#include<stdio.h>
int main()
{
    int N,i,fact;
    while(scanf("%d",&N)==1){
        fact=1;
        for(i=1;i<=N;i++){
            fact=fact*i;
        }
        printf("%d\n",fact);
    }
    return 0;
}
