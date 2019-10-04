#include<stdio.h>
int main()
{
    double A,R,pi=3.14159;
    while(scanf("%lf",&R)!=EOF){
        A=pi*R*R;
        printf("A=%.4lf",A);
        printf("\n");
    }
    return 0;
}
