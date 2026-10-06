#include<bits/stdc++.h>
using namespace std;

int main()
{
int i,j,k,l,m,n,o,p,t;
string a,b,c;

cin>>t;

while(t--)
{
cin>>n;
cin>>a>>b>>c;

k=0;
for(i=0;i<n;i++){ if(a[i]==b[i]&&c[i]!=a[i]){  k=1; break;}
else if(a[i]!=b[i]&&a[i]!=c[i]&&b[i]!=c[i]){k=1; break;  }
  }
k?cout<<"YES\n":cout<<"NO\n";

}

return 0;
}
