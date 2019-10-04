#include<stdio.h>
int main()
{
    float a,b,c;
    while(scanf("%f%f",&a,&b)!=EOF){
        c=(a*3.5+b*7.5)/(3.5+7.5);
        printf("MEDIA = %.5f\n",c);
    }
    return 0;
}
