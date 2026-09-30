#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,m,n,t;

    cin>>t;

    while(t--)
    {

        cin>>n>>k;

        if(4*n-2==k){ cout<<2*n<<"\n"; }
        else{
            m=k/2+k%2;

            cout<<m<<"\n";


        }

    }


    return 0;
}
