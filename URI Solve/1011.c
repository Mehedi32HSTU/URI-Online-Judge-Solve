#include<stdio.h>
int main()
{
    int R;
    double pi=3.14159,VOLUME;
    while(scanf("%d",&R)!=EOF){
        VOLUME=4/3.0*pi*R*R*R;
        printf("VOLUME = %.3lf\n",VOLUME);
    }
    return 0;
}
