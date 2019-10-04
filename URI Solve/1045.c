#include<stdio.h>
int main()
{
    int i,j,n;
    double a[3],A,B,C,t;
    ///while(scanf("%d",&n)==1){
    while(scanf("%lf%lf%lf",&A,&B,&C)==3){
 /* for(i=0;i<3;i++){
        scanf("%d",&a[i]);
    }  */
    a[0]=A;a[1]=B;a[2]=C;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(a[i]>a[j]){
                t=a[i];a[i]=a[j];a[j]=t;            }
        }
    }
    A=a[0];B=a[1];C=a[2];
        if(A>=(B+C)){
            printf("NAO FORMA TRIANGULO\n");
        }
        else if(A*A==(B*B+C*C)){
            printf("TRIANGULO RETANGULO\n");
        }
         else if(A*A>(B*B+C*C)){
            printf("TRIANGULO OBTUSANGULO\n");
        }
         else if(A*A<(B*B+C*C)){
            printf("TRIANGULO ACUTANGULO\n");
        }
        if(A==B&&A==C){
            printf("TRIANGULO EQUILATERO\n");
        }
        if((A==B&&A!=C)||(A==C&&A!=B)||(B==C&&B!=A)){
            printf("TRIANGULO ISOSCELES\n");
        }
    }
    return 0;
}
