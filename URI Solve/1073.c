#include<stdio.h>
int main()
{
    int N,i,x;
    while(scanf("%d",&N)!=EOF){
        for(i=1;i<=N;i++){
            if(i%2==0){
                x=i*i;
                printf("%d^2 = %d\n",i,x);
            }
        }
    }
    return 0;

}
