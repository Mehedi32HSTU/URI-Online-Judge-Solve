#include<stdio.h>
#include<ctype.h>
int main()
{
    int N,n,i;
    float sum_c=0,sum_r=0,sum_s=0,total=0,p_c,p_r,p_s;
    char l;
    scanf("%d",&N);
        for(i=0;i<N;i++){
            scanf("%d%*c%c",&n,&l);
            total=total+n;
            if(l=='C') { sum_c=sum_c+n;}
            if(l=='R') { sum_r=sum_r+n;}
            if(l=='S') { sum_s=sum_s+n;}

            p_c=(sum_c*100)/total;
            p_s=(sum_s*100)/total;
            p_r=(sum_r*100)/total;
            printf("%d ",i);
        }
        printf("Total: %.0f cobaias\nTotal de coelhos: %.0f\n",total,sum_c);
        printf("Total de ratos: %.0f\nTotal de sapos: %.0f\n",sum_r,sum_s);
        printf("Percentual de coelhos: %.2f %%\nPercentual de ratos: %.2f %%\n",p_c,p_r);
        printf("Percentual de sapos: %.2f %%\n",p_s);
    return 0;
}
