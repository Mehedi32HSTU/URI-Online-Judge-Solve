#include<stdio.h>
int main()
{
    int X,Y;
    while(scanf("%d%d",&X,&Y)!=EOF){
        if(X==Y){
            break;
        }
        else if(X>Y){
            printf("Decrescente\n");
        }
        else if(X<Y){
            printf("Crescente\n");
        }
    }
    return 0;
}
