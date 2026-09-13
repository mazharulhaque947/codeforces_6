
#include<bits/stdc++.h>
using namespace std;

int main()
{
int a[200],u,v,i,j,k,l,m,n,t;

cin>>t;
while(t--)
{
cin>>n>>k;
l=1;
for(i=0;i<n;i++){  cin>>a[i];   }
//l?cout<<"YES\n":cout<<"NO\n";
sort(a,a+n);
l=1;
if(a[n-1]>k){
if(a[0]+a[1]<=k){  }else{l=0;} }
if(l==1){  cout<<"YES\n";  }
else{

    cout<<"NO\n";

}
}
return 0;
}
