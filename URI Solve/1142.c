#include<stdio.h>
int main()
{
    int a=1,x,i,j,k;
    while(scanf("%d",&x)!=EOF){
        for(i=1;i<=x*4;i+=4){
            for(j=i;j<i+3;j++){
                printf("%d ",j);
            }
            printf("puma\n");
            }
        }
    return 0;
}
