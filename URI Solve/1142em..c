#include<stdio.h>
int main()
{
  int n,i;
  while(scanf("%d",&n)==1){
    for(i=1;i<=n*4;i++){
        if(i%4==0) printf("PUM\n");
        else printf("%d ",i);
    }
  }
 return 0;
}
