#include<stdio.h>
int main()
{
    int X,Y,t,i;
    float d;
    while(scanf("%d",&t)==1){
        for(i=0;i<t;i++){
           scanf("%d%d",&X,&Y);
            if(Y==0){
                printf("divisao impossivel\n");
            }
            else{
                d=(float)X/(float)Y;
                printf("%.1f\n",d);
            }
        }
    }
    return 0;
}
