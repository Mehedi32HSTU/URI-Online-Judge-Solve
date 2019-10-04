#include<stdio.h>
int main()
{
    int h,hi,hf;
    while(scanf("%d%d",&hi,&hf)!=EOF){
        if(hi>hf) h=24-hi+hf;
        else if(hi<hf) h=hf-hi;
        else if(hi==hf) h=24;
        printf("O JOGO DUROU %d HORA(S)\n",h);
    }
    return 0;
}
