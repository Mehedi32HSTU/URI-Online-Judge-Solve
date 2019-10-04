#include<stdio.h>
int main()
{
    int A,B,C;
    while(scanf("%d%d",&A,&B)!=EOF){
            if(B<A){
                C=A;A=B;B=C;
            }

        if(B%A==0){
            printf("Sao Multiplos\n");
        }
        else{
            printf("Nao sao Multiplos\n");
        }
    }
    return 0;
}
