#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[200],i,j,k,l,m,n,t,o,p,x,y,z,c[200],b[200];
    string s;
    cin>>t;

    while(t--)
    {
        cin>>n;
        cin>>s;
        k=s[0]-48;

        l=m=0;
        o=k;
        x=0;
        for(i=0;i<n;i++){

            p=s[i]-48;
            x+=p;
            if(p==o){ m++; }
            else{ a[l]=m;  if(l%2==0){ b[l]=m; c[l]=0; } else{ b[l]=0; c[l]=m; } l++; m=1; o=p; }
            if(i==n-1){   a[l]=m; if(l%2==0){ b[l]=m; c[l]=0; } else{ b[l]=0; c[l]=m; } l++; o=p;  }

        }

        for(i=1;i<l;i++){ b[i]+=b[i-1];  c[i]+=c[i-1];   }

       //  for(i=0;i<l;i++){  cout<<b[i]<<" ";   } cout<<"\n";
        // for(i=0;i<l;i++){  cout<<c[i]<<" ";   } cout<<"\n";
        if(k==1){   cout<<n-x<<" \n"; }
        else if(l==1){ cout<<0<<" \n"; }
        else{

            y=n;

            for(i=0;i<l;i+=2)
            {
                  z=0;
                  if(  i>0 ){ z+=c[i-1];}
                    z+=(b[l-1]-b[i]);

                    if(z<y){y=z;}

            }

           cout<<y<<"\n";
        }
    }

    return 0;
}
