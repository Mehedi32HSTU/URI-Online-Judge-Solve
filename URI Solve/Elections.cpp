#include<bits/stdc++.h>
using namespace std;
#define max 10000000
long long can[max]={0};
int main(){
long long n,m; cin>>n>>m;
long long val,num,index;
for(int i=1;i<=m;i++){
        val=0;index=1;
for(int j=1;j<=n;j++){
    cin>>num;
    if(num>val) { index=j;val=num; }
}
can[index]++;
}
val=0,index=0;
for(int i=1;i<=n;i++){
  if(can[i]>val){
    index=i;val=can[i];
  }
}
cout<<index<<endl;
return 0;
}
