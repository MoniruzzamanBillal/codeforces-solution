#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{

    ll n;
    cin>>n;
    ll b[n];
    ll a[n];
    ll x = 0;

    int i;

    for(i=0; i<n; i++)
    {
        cin>>b[i];
    }

    for(i=0; i<n; i++)
    {
        a[i] = b[i]+x;
        x = max(x,a[i]);
    }

    for(i=0 ; i<n; i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}
