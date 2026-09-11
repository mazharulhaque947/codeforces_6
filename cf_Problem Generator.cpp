
#include<bits/stdc++.h>
using namespace std;

int main()
{
int a[200],u,v,i,j,k,l,m,n,t;
string s;
cin>>t;
while(t--)
{
cin>>n>>m;

cin>>s;
for(i=0;i<7;i++){ a[i]=0;  }
for(i=0;i<n;i++){

a[ s[i]-65 ]++;
}
k=0;
for(i=0;i<7;i++){
if(a[i]<m){   k+=m-a[i];  }
}
cout<<k<<"\n";
}
return 0;
}
