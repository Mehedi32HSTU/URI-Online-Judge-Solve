#include<stdio.h>
int main()
{
    int i,j,k,x;
    while(scanf("%d",&x)==1){
        for(i=1;i<=x;i++){
            j=i*i; k=i*i*i;
            printf("%d %d %d\n",i,j,k);
            printf("%d %d %d\n",i,j+1,k+1);
        }
    }
    return 0;
}

