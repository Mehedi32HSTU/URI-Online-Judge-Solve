#include<stdio.h>
int main()
{
    int i,j,x,y,m,k;
    for(i=1,j=7;i<=9;i=i+2,j+=2){

    for(k=0,m=j;k<3;k++,m--){
        printf("I=%d J=%d\n",i,m);
    }
  }
    return 0;
}

