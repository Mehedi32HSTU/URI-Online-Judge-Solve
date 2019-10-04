#include<stdio.h>
int main()
{
    int i,p=0,n=0,e=0,o=0,x;
    for(i=1;i<=5;i++){
        scanf("%d",&x);
        if(x>0) p++;
        if(x<0) n++;
        if(x%2==0) e++;
        if(x%2!=0) o++;
    }
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n",e,o);
    printf("%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n",p,n);
}
