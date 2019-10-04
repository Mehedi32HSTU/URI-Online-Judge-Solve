#include<stdio.h>
int main()
{
    int number=2002,x;
    while(scanf("%d",&x)!=EOF){
       if(x==number){
        printf("Acesso Permitido\n");
        break;
       }
       else{
        printf("Senha Invalida\n");
       }
    }
    return 0;
}
