#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,o,j,i,k,l,m,t,n;
    string q;

    cin>>t;

    while(t--)
    {

        cin>>q;
        n=q.size();

        a=c=b=0;

        for(i=0;i<n;i++){  if(q[i]=='A'){a++;}else if(q[i]=='B'){b++;} else{ c++; }  }

       if(b==a+c){ cout<<"YES\n"; }
       else{  cout<<"NO\n"; }
    }

    return 0;
}
