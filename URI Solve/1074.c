#include<stdio.h>
int main()
{
    int N,i,x;
    while(scanf("%d",&N)!=EOF){
        for(i=1;i<=N;i++){
            scanf("%d",&x);
            if(x>0&&x%2==0){
                printf("EVEN POSITIVE\n");
            }
            else if(x>0&&x%2!=0){
                printf("ODD POSITIVE\n");
            }
            else if(x<0&&x%2==0){
                printf("EVEN NEGATIVE\n");
            }
            else if(x<0&&x%2!=0){
                printf("ODD NEGATIVE\n");
            }
            else if(x==0){
                printf("NULL\n");
            }
        }
    }
    return 0;
}
