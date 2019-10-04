#include<stdio.h>
int main()
{
    int N,i,in,out,x;
    while(scanf("%d",&N)!=EOF){
        in=0; out=0;
        for(i=1;i<=N;i++){
            scanf("%d",&x);
            if(x>=10&&x<=20) in++;
            else out++;
        }
        printf("%d in\n%d out\n",in,out);
    }
    return 0;
}
