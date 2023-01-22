#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define pp pop_back
#define ml "\n"

int main()
{
    ll n,t;

    cin>>n>>t;
    ll i;

    if(n == 1 && t == 10)
    {
        cout<<"-1"<<ml;
    }
    else
    {
        if(n>=2 && t == 10)
        {
            for(i=1; i<n; i++)
            {
                cout<<"1";
            }
            cout<<"0"<<ml;
        }
        else{
            for(i=1; i<=n; i++)
            {
                cout<<t;
            }
        }
    }





    return 0;
}

