#include<stdio.h>
int main()
{
    int i,j,x,k,m;
    for(i=1,j=7;i<=9;i=i+2,j+=2){
        m=j;
      for(x=0;x<3;x++){
        printf("I=%d J=%d\n",i,m);
        m--;
      }
    }
    return 0;
}

