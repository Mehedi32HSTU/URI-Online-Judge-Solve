#include<stdio.h>
int main()
{
    int d,h,m,s,si,di,df,sf,mi,mf,hi,hf;
    scanf("%*s %d %d %*c %d %*c %d",&di,&hi,&mi,&si);
        scanf("%*s %d %d %*c %d %*c %d",&df,&hf,&mf,&sf);
        if(sf>=si) s=sf-si;
        else{ s=60+sf-si; mi++; }
        if(mf>=mi) m=mf-mi;
        else { m=60+mf-mi; hi++; }
        if(hf>=hi) h=hf-hi;
        else  { h=24+hf-hi; di++; }
        if(df>=di) d=df-di;
    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",d,h,m,s);
return 0;
}
