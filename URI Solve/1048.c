#include<stdio.h>
int main()
{
    float s,i,s_i,m_e,i_p;
    while(scanf("%f",&s)!=EOF){
        if(s>=0&&s<=400){
            i_p=15; s_i=s+(s*i_p/100); m_e=(s*i_p/100);
        }
        else if(s>400&&s<=800){
          i_p=12; s_i=s+(s*i_p/100); m_e=(s*i_p/100);
        }
        else if(s>800&&s<=1200){
          i_p=10; s_i=s+(s*i_p/100); m_e=(s*i_p/100);
        }
        else if(s>1200&&s<=2000){
          i_p=7; s_i=s+(s*i_p/100); m_e=(s*i_p/100);
        }
        else if(s>2000){
          i_p=4; s_i=s+(s*i_p/100); m_e=(s*i_p/100);
        }
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %.0f %%\n",s_i,m_e,i_p);
    }
    return 0;
}
