#include<stdio.h>
int main()
{
    int n,age=0,a=0;
    float mean;
    while(scanf("%d",&n)==1){
        if(n<0) break;
        else{
        age=age+n;
        a++;
      }
  }
   mean=(float)((float)age/(float)a);
   printf("%.2f\n",mean);
return 0;
}
