#include<stdio.h>
int main()
{
    int i,x,n=0;
    for(i=1;i<=5;i++){
        scanf("%d",&x);
        if(x%2==0){
            n++;
        }
    }
    printf("%d valores pares\n",n);
    return 0;
}
