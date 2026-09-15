#include<bits/stdc++.h>
using namespace std;

int main()
{
int u,v,i,j,k,l,m,n,t;

cin>>t;
while(t--)
{
cin>>n;
for(i=0;i<2*n;i++){
for(j=0;j<2*n;j++){
  k=i/2;
if(k%2==0){
        v=j/2;
if(v%2){cout<<".";}else{cout<<"#";}
  }
else{
v=j/2;
if(v%2){cout<<"#";}else{cout<<".";}
 }
} cout<<"\n";
   }

}
return 0;
}
