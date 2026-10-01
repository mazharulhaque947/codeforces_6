#include<bits/stdc++.h>
using namespace std;
long long pp(int n)
{
    int a,b,c;

    c=1;
    a=2;
    while(n>0){

        if(n%2==1){ c=c*a; }
        a=a*a;
        n=n/2;
    }

    return c;
}
int main()
{
    long long i,j,k,l,m,n,o,p,t;

    cin>>t;

    while(t--)
    {

        cin>>n>>k;

        m=0;

        if(k>1){  m+= 2*(k-1); m+=pp(n-(k-1)); }

       else{  m+=pp(n);  }

        cout<<m<<"\n";
    }

    return 0;
}
