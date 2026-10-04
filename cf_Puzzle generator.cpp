#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[200],i,j,t,n;

    cin>>n;

    for(i=0;i<n;i++)
    {

        cin>>a[i];


    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++){

        cout<<a[(i+j)%n]<<" ";
        }

        cout<<"\n";

    }

    return 0;
}
