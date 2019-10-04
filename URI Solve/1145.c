#include<stdio.h>
int main()
{
    int i,X,Y;
    while(scanf("%d%d",&X,&Y)==2){
        for(i=1;i<=Y;i++){
            printf("%d",i);
            if(i%X==0) printf("\n");
            else printf(" ");
        }
    }
    return 0;
}
