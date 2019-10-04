#include<stdio.h>
#include<math.h>
int main()
{
    float a,N,S;
    N=100.0;
    S=1+(1/(N+1)*(N+1)+1/(N+1))/2;
    printf("%.2f\n",S);
    return 0;
}
