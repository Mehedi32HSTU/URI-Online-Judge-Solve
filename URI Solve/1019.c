#include<stdio.h>
int main()
{
   int N,hours,minutes,s,seconds;
   while(scanf("%d",&N)!=EOF){
    hours=N/3600;s=N%3600;minutes=s/60;
    seconds=s%60;
    printf("%d:%d:%d\n",hours,minutes,seconds);
   }
   return 0;
}
