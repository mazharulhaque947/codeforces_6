#include<bits/stdc++.h>
using namespace std;

int main()
{
int a[12],i,j,k,l,m,n,o,p,t,u,v,x,y;

cin>>t;
while(t--)
{
   cin>>x>>k;
  o=0;
  l=0;
u=x;
  while(u>0){
  a[l]=u%10;
o=o+a[l];
 l++;
u/=10;

}
v=o/k;
v++;
v=v*k;
if(x<k){ cout<<k<<"\n";   }
else if(o%k==0){    cout<<x<<"\n";  }
else if( 9*l-v>=0){
p=0;
v=v-o;
while(v>0){
if(9-a[p]>=v){  a[p]+=v;    v=0;  }
else{   v-=9-a[p] ; a[p]=9;  }
p++;
}
for(i=l-1;i>=0;i--){ cout<<a[i];   } cout<<"\n";
}
else{
cout<<1;
for(i=0;i<l-2;i++){  cout<<0; }
cout<<k-1<<"\n";
}

}
return 0;
}
