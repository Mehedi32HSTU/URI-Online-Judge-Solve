#include<bits/stdc++.h>
using namespace std;
int main()
{
    float a,sum;
    for(;;)
    {
        int count=0;sum=0.0;
        for(;;)
        {
            scanf("%f",&a);
            if(a>=0.0&&a<=10.0)
            {
                count++;
                sum=sum+a;
            }
            else  printf("nota invalida\n");
            if(count==2) break;
        }
        float avrg=sum/2.0;
        printf("media = %.2f\n",avrg);
        printf("novo calculo (1-sim 2-nao)\n");
        for(;;)
        {
            scanf("%f",&a);
            if(a==1)
            {
                break;
            }
            else if(a==2)
            {
                return 0;
            }
            else
            {
                 printf("novo calculo (1-sim 2-nao)\n");
            }
        }
    }
    return 0;
}

