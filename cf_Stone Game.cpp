#include<bits/stdc++.h>
using namespace std;

int main()
{
int a[200],u,v,i,j,k,l,m,n,t;

cin>>t;
while(t--)
{
cin>>n;
v=u=0;
for(i=0;i<n;i++){  cin>>a[i];  if(a[i]<a[u]){ u=i ;}
if(a[i]>a[v]){ v=i ;}
  }
  m=max(v,u)-min(u,v);

k=0;
if(u+1<=n-u){  u++;  } else {  u=n-u;k=1;}
l=0;
if(v+1<=n-v){  v++;  } else { v=n-v; l=1;}
//if(k==l){  cout<<max(u,v);  }
//else{   cout<<u+v;     }
cout<< min( min(u,v)+m , u+v    );
cout<<" \n";
}

return 0;
}

