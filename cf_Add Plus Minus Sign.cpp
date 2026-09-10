
#include<bits/stdc++.h>
using namespace std;

int main()
{
int a[200],u,v,i,j,k,l,m,n,t;
string s;
cin>>t;
while(t--)
{
cin>>n;
cin>>s;
k=0;
if(s[0]=='1'){  k++;}


for(i=1;i<n;i++){

 if(s[i]=='1'){ if(k==1){  cout<<"-"; }else{cout<<"+";  }k=1-k;}
else{  cout<<"+";  }

}
cout<<"\n";
}
return 0;
}
