#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define pp pop_back
#define ml "\n"
int main()
{
    ll test;
    cin>>test;
    while(test--)
    {
        ll n;
        cin>>n;
        ll a[n];
        int i;
        bool has = true;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(i=0; i<n-2; i++)
        {
            if(a[i]<a[i+1] && a[i+1]>a[i+2])
            {
                cout<<"YES"<<ml;
                cout<<i+1<<" "<<i+2<<" "<<i+3<<ml;
                has = false;
                break;
            }
        }
        if(has)
        {
            cout<<"NO"<<ml;
        }
    }
    return 0;
}
