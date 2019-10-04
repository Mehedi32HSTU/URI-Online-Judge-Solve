#include<stdio.h>
int main()
{
    int i,j,T,N;
    unsigned int a,b,c,X;
    scanf("%d",&T);
    for(i=0;i<T;i++){
       a=0;b=1;
       scanf("%d",&N);
       for(j=0;j<=N;j++){
            X=a;
         if(j==N) printf("Fib(%d) = %d\n",N,X);
         c=a+b; a=b; b=c;
       }
    }
    return 0;
}

