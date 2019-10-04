#include<stdio.h>
int main()
{
    int a,b,c,i,N;
    while(scanf("%d",&N)==1){
        a=0;
        b=1;
        for(i=0;i<N-1;i++){
            printf("%d ",a);
            c=a+b;
            a=b;
            b=c;
        }
        printf("%d",a);
        printf("\n");
    }
    return 0;
}
