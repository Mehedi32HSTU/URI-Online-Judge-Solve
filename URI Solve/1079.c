#include<stdio.h>
int main()
{
    int N,i;
    float a,b,c,w;
    while(scanf("%d",&N)!=EOF){
        for(i=0;i<N;i++){
            scanf("%f%f%f",&a,&b,&c);
            w=(2*a+3*b+5*c)/(2+3+5);
            printf("%.1f\n",w);
        }
    }
    return 0;

}
