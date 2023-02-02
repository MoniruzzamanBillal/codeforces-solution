#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define pp pop_back
#define ml "\n"

int main()
{
    ll n,x;

    cin>>n>>x;
    ll i, cou=0;

    for(i=1; i<=n; i++)
    {
        if((x%i == 0) && (x/i <= n))
        {
            cou++;
        }
    }

    cout<<cou<<endl;





    return 0;
}

