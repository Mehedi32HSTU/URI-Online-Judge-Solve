#include<stdio.h>
int main(){
    int n;
    while(scanf("%d",&n)==1){
        if(n&1) printf("odd\n");
        else printf("even\n");
    }
return 0;
}
