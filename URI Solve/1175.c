#include<stdio.h>
int main()
{
    int i,j,N[20],n[20];
    for(i=0;i<20;i++){
        scanf("%d",&N[i]);
    }
    for(i=0,j=0;i<20;i++,j++){
        n[j]=N[i];
    }
    for(i=0,j=19;i<20;i++,j--){
        N[i]=n[j];
    }
    for(i=0;i<20;i++){
        printf("N[%d] = %d\n",i,N[i]);
    }
    return 0;
}
