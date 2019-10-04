#include<stdio.h>
int main()
{
    int i,x,n[100],a,b,y[100];
    for(i=0;i<100;i++){
        scanf("%d",&n[i]);
    }
    for(i=0;i<100;i++){
        y[i]=n[i];
    }
    x=n[0];
    for(i=0;i<100;i++){
        if(x<n[i]){
            a=x; x=n[i];n[i]=a;
        }
    }
    for(i=0;i<100;i++){
        if(x==y[i]){
            b=i+1;
            break;
        }
    }
    printf("%d\n%d\n",x,b);
    return 0;
}
