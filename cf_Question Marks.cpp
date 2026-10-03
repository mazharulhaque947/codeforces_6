#include<bits/stdc++.h>
using namespace std;

int main()
{

    int a[4],i,j,k,l,m,n,t;
    string q;

    cin>>t;

    while(t--)
    {

        for(i=0;i<4;i++){ a[i]=0; }
         cin>>n;
        cin>>q;

        for(i=0;i<4*n;i++){  if( q[i]>=65&&q[i]<=90 ){ a[ q[i]-65 ]++; }  }
        m=0;

        for(i=0;i<4;i++){  if(a[i]>n){m+=n;} else{ m+=a[i]; } }

        cout<<m<<"\n";
    }

    return 0;
}
