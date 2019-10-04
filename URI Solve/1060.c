#include<stdio.h>
int main()
{
    int i,p=0;
    float x;
    for(i=0;i<=5;i++){
        scanf("%f",&x);
        if(x>0){
          p++;
        }
    }
    printf("%d valores positivos\n",p);
    return 0;
}
