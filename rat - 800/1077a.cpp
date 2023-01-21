#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        ll a,b,n;
        cin>>a>>b>>n;

        ll na,nb;
        ll suma,sumb;
        ll res,i;
        suma=sumb=0;

        if(n%2 == 0)
        {
            na=n/2;
            nb=na;
        }
        else
        {
            nb=n/2;
            na=nb+1;
        }
        for(i=1; i<=na; i++)
        {
            suma+=a;
        }
        for(i=1; i<=nb; i++)
        {
            sumb+=b;
        }
        res=suma-sumb;
        cout<<res<<endl;

    }

    return 0;
}
