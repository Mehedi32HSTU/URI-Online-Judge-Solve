#include<stdio.h>
int main()
{
    float i,p=0,sum=0;
    float x,A;
    for(i=0;i<=5;i++){
        scanf("%f",&x);
        if(x>0){
          p++;
          sum=sum+x;
        }
    }
    A=sum/p;
    printf("%.0f valores positivos\n",p);
    printf("%.1f\n",A);
    return 0;
}

