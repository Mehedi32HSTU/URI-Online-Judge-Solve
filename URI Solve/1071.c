#include<stdio.h>
int main()
{
    int a,b,c,i,sum;
    while(scanf("%d%d",&a,&b)!=EOF){
        sum=0;
        if(a>b){ c=a;a=b;b=c; }
        for(i=a+1;i<b;i++){
            if(i%2!=0) sum=sum+i;
        }
        printf("%d\n",sum);
    }
    return 0;
}
