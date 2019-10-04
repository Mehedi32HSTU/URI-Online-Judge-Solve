#include<stdio.h>
int main()
{
    int X,i;
    while(scanf("%d",&X)==1){
        if(X==0) break;
        else{
            for(i=1;i<=X;i++){
                printf("%d",i);
                if(i<X) printf(" ");
                else printf("\n");
            }
        }
    }
    return 0;
}
