#include<stdio.h>
int main()
{
    int h,m,ih,im,fh,fm;
    while(scanf("%d%d%d%d",&ih,&im,&fh,&fm)==4)
    {
        if(fm==im)
        {
            m=0;
            if(fh>ih) h=fh-ih;
            else h=24+fh-ih;
        }
        else
        {
            if(fm>im) m=fm-im;
            else
            {
                m=60+fm-im;
                ih++;
            }
            if(fh>=ih) h=fh-ih;
            else h=24+fh-ih;
        }
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
    }
    return 0;
}
