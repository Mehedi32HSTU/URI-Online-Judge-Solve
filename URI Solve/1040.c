#include<stdio.h>
int main()
{
    float N1,N2,N3,N4,x,y,z;
    while(scanf("%f%f%f%f",&N1,&N2,&N3,&N4)!=EOF){
        x=(N1*2+N2*3+N3*4+N4*1)/(1+2+3+4);
        if(x>=7.0){
            printf("Media: %.1f\nAluno aprovado.\n",x);
        }
        else if(x<5.0){
            printf("Media: %.1f\nAluno reprovado.\n",x);
        }
        else if(x>=5.0&&x<=6.9){
            scanf("%f",&y);z=(x+y)/2;
            printf("Media: %.1f\nAluno em exame.\n",x);
            printf("Nota do exame: %.1f\n",y);
            if(z>=5.0){
                printf("Aluno aprovado.\n");
            }
            else{
              printf("Aluno reprovado.\n");
            }
            printf("Media final: %.1f\n",z);
        }
    }
    return 0;
}
