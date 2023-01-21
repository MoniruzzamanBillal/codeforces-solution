#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int  main()
{
    ll d,l;
    ll i;
    cin>>d>>l;
    ll a[d];
    for(i=0; i<d; i++)
    {
        cin>>a[i];
    }
    ll rem=0,ans;
    for(i=0; i<d; i++)
    {
        ans = (a[i]+rem);
        cout<<ans/l<<" ";
        rem = ans%l;
    }
    return 0;
}
