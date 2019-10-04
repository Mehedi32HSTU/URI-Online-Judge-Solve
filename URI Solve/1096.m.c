#include<stdio.h>
int main()
{
    int i,j,x;
    for(i=1;i<=9;i=i+2){
        j=7;
      for(x=0;x<3;x++){
        printf("I=%d J=%d\n",i,j);
        j--;
      }
    }
    return 0;
}
