#include<stdio.h>
int main()
{
    int X; float Y,Consumption;
    while(scanf("%d%f",&X,&Y)!=EOF){
       Consumption=X/Y;
       printf("%.3f km/l\n",Consumption);
    }
    return 0;
}
