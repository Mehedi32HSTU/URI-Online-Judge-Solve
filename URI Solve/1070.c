#include<stdio.h>
int main()
{
    int i,n,x;
    while(scanf("%d",&n)!=EOF){
        for(i=1;i<=6;i++){
            if(n%2==0){
             n=n+1;
             printf("%d\n",n);
             n+=2;
            }
            else{
             printf("%d\n",n);
             n+=2;
            }
        }
    }
    return 0;
}
