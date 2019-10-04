#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,ab;
    scanf("%d%d%d",&a,&b,&c);
  if(a>b&&a>c) ab=a;
  else if(b>a&&b>c) ab=b;
  else ab=c;
    printf("%d eh o maior\n",ab);
    return 0;
}
